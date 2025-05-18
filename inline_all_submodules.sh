#!/bin/bash

# --- SAFETY FIRST: BACKUP YOUR REPOSITORY ---
echo "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"
echo "!! WARNING: This script will permanently convert all Git submodules     !!"
echo "!! in this repository into regular directories, committing their        !!"
echo "!! current content directly.                                            !!"
echo "!!                                                                      !!"
echo "!! MAKE ABSOLUTELY SURE YOU HAVE A BACKUP OF YOUR ENTIRE REPOSITORY     !!"
echo "!! BEFORE YOU PROCEED.                                                  !!"
echo "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"
read -p "Type 'YESIDO' if you understand and have a backup: " confirmation
if [ "$confirmation" != "YESIDO" ]; then
    echo "Aborted by user."
    exit 1
fi

echo "Proceeding with inlining all submodules..."

# --- Step 1: Get a list of all submodule paths ---
# We'll store them because .gitmodules will be removed
submodule_paths=()
while IFS= read -r path; do
    # `git submodule status` output is: <commit_sha> <path> (<branch/tag/describe>)
    # We only need the path (second field)
    # Handle cases where path might have spaces (though uncommon for submodules)
    submodule_paths+=("$(echo "$path" | awk '{print $2}')")
done < <(git submodule status --quiet) # --quiet to suppress "No submodule mapping found" errors if none

if [ ${#submodule_paths[@]} -eq 0 ]; then
    echo "No submodules found to process."
    exit 0
fi

echo "Found the following submodule paths to inline:"
for path in "${submodule_paths[@]}"; do
    echo "  - $path"
done
echo # Newline for readability

# --- Step 2: De-initialize and remove submodule definitions from Git ---
echo "De-initializing submodules and removing their definitions from Git index..."
for path in "${submodule_paths[@]}"; do
    echo "  Processing submodule at: $path"
    # De-initialize: Removes entry from .git/config, effectively makes .git dir in submodule a plain dir
    git submodule deinit -f -- "$path"

    # Remove from Git index (but keep files in working directory)
    git rm --cached -- "$path"
done

# Remove the .gitmodules file, as all submodules are being removed
if [ -f .gitmodules ]; then
    echo "Removing .gitmodules file..."
    git rm .gitmodules
else
    echo ".gitmodules file not found (perhaps already removed or no submodules initially)."
fi

# Commit the removal of all submodule definitions
echo "Committing the removal of submodule definitions..."
git commit -m "Convert all submodules to regular directories"
if [ $? -ne 0 ]; then
    echo "Error committing submodule definition removal. Please check Git status."
    exit 1
fi
echo "Submodule definitions removed and committed."
echo # Newline

# --- Step 3: Add the files from the former submodule directories ---
echo "Adding files from former submodule directories as regular content..."
for path in "${submodule_paths[@]}"; do
    echo "  Adding files from: $path"
    # Remove the .git directory from the former submodule folder, if it exists
    # `git submodule deinit` should have handled this, but as a safeguard:
    if [ -d "$path/.git" ]; then
        echo "    Removing leftover .git directory from $path"
        rm -rf "$path/.git"
    fi
    git add "$path"
done

# Commit all the newly added files
echo "Committing all former submodule files..."
# Check if there's anything to commit (git add might not have added anything if folders were empty or already tracked)
if ! git diff --cached --quiet; then
    git commit -m "Add all former submodule files directly to repository"
    if [ $? -ne 0 ]; then
        echo "Error committing former submodule files. Please check Git status."
        exit 1
    fi
    echo "Former submodule files added and committed."
else
    echo "No files from former submodules to commit (perhaps they were empty or already tracked as regular files)."
fi

echo ""
echo "--------------------------------------------------------------------------"
echo "All submodules should now be inlined as regular directories."
echo "Please review the Git history and your project structure carefully."
echo "Remember to push these changes to your remote if desired."
echo "--------------------------------------------------------------------------"

exit 0
