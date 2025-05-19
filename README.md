
# Panther Simulation with Docker Setup

This guide provides step-by-step instructions to set up and run the Husarion Panther UGV simulation in a Docker container using ROS 2 Humble.

## Prerequisites

1.  **Linux Operating System:** These instructions are tailored for a Linux environment.
2.  **Docker Engine (CLI):** You must install Docker Engine.
    *   **IMPORTANT:** **Do NOT install Docker Desktop.** Docker Desktop for Linux creates its own VM which can complicate X11 forwarding and device access for robotics simulations.
    *   Follow the official Docker Engine installation guide for your Linux distribution: [Install Docker Engine](https://docs.docker.com/engine/install/)
    *   Ensure your user is added to the `docker` group to run Docker commands without `sudo`:
        ```bash
        sudo usermod -aG docker $USER
        ```
        You'll need to log out and log back in for this change to take effect.

## Setup Instructions

Follow these steps in order on your **host machine** unless specified otherwise.

### Step 0: Verify Docker Installation
(This is essentially covered by Prerequisites, but ensure Docker is working)

```bash
docker --version
docker run hello-world # Test if docker is working

Step 1: Add panther_connect Bash Function

This function helps you easily connect to (or start and connect to) your Panther simulation Docker container.

Open your ~/.bashrc file with a text editor (e.g., nano ~/.bashrc or gedit ~/.bashrc) and add the following function to the end of the file:

cat << 'EOF' >> ~/.bashrc

panther_connect() {
    xhost +local:root # Allow local Docker container to access X server
    local container_name="my_panther_sim" # <--- CHANGE THIS if your container name is different
    local exec_target_name="my_panther_sim" # <--- CHANGE THIS if exec target is different from start target (usually the same)

    # Check if the container is currently running
    if [ -n "$(docker ps -q -f name="^${container_name}$")" ]; then
        echo "Container '${exec_target_name}' is active. Attaching with exec..."
        docker exec -it "${exec_target_name}" /bin/bash
    else
        # Check if the container exists (even if stopped)
        if [ -n "$(docker ps -aq -f name="^${container_name}$")" ]; then
            echo "Container '${container_name}' exists but is not active. Starting..."
            if docker start "${container_name}"; then
                echo "Container '${container_name}' started successfully."
                echo "Attempting to attach now..."
                docker exec -it "${exec_target_name}" /bin/bash
            else
                echo "Failed to start container '${container_name}'. Check Docker logs."
            fi
        else
            echo "Container '${container_name}' does not exist. Please create or run it first."
            echo "Example: Use the 'docker run...' command provided in the setup instructions."
        fi
    fi
}
EOF
IGNORE_WHEN_COPYING_START
content_copy
download
Use code with caution.
Bash
IGNORE_WHEN_COPYING_END

Then, source your .bashrc to make the function available in your current terminal session:

source ~/.bashrc
IGNORE_WHEN_COPYING_START
content_copy
download
Use code with caution.
Bash
IGNORE_WHEN_COPYING_END
Step 2: Allow X Server Connections

This command allows Docker containers running as root to connect to your host's X server for GUI applications (like Gazebo). The panther_connect function also runs this, but it's good to run it once initially.

xhost +local:root
IGNORE_WHEN_COPYING_START
content_copy
download
Use code with caution.
Bash
IGNORE_WHEN_COPYING_END

(Note: xhost +local:root is generally safe for local development. For more security-conscious setups, explore xauth methods.)

Step 3: Run the Panther Docker Container

This command will download the Panther simulation Docker image (if not already present) and start a new container named my_panther_sim.

docker run -it \
  --name my_panther_sim \
  --env="DISPLAY" \
  --env="QT_X11_NO_MITSHM=1" \
  --volume="/tmp/.X11-unix:/tmp/.X11-unix:rw" \
  --network host \
  --privileged \
  husarion/panther-gazebo:humble-ros2-devel
IGNORE_WHEN_COPYING_START
content_copy
download
Use code with caution.
Bash
IGNORE_WHEN_COPYING_END

You should now be inside the Docker container's terminal. If you exit this terminal, the container will stop. You can use panther_connect (from Step 1) in a new host terminal to restart and/or re-enter it.

The following steps are to be performed inside the Docker container's terminal.

If you are not already inside, open a new host terminal and run:

panther_connect
IGNORE_WHEN_COPYING_START
content_copy
download
Use code with caution.
Bash
IGNORE_WHEN_COPYING_END
Step 4: Create Simulation Alias (Inside Docker)

This creates a convenient alias to launch the Gazebo simulation.

echo 'alias run_sim="ros2 launch husarion_ugv_gazebo simulation.launch.py"' >> ~/.bashrc && source ~/.bashrc
IGNORE_WHEN_COPYING_START
content_copy
download
Use code with caution.
Bash
IGNORE_WHEN_COPYING_END
Step 5: Install Dependencies (Inside Docker)

Update package lists and install necessary tools for building ROS 2 packages and managing dependencies.

apt update && apt install -y python3-colcon-common-extensions git build-essential nano gedit python3-rosdep && rosdep init && rosdep update
IGNORE_WHEN_COPYING_START
content_copy
download
Use code with caution.
Bash
IGNORE_WHEN_COPYING_END

(Note: rosdep init might say "already initialized" if the base image did it, which is fine. rosdep update is still important.)

Step 6: Prepare ros2_ws (Inside Docker)

Navigate to the ros2_ws (ROS 2 workspace) directory and clear any existing content to prepare for a fresh clone.

cd /ros2_ws && rm -rf * .git
IGNORE_WHEN_COPYING_START
content_copy
download
Use code with caution.
Bash
IGNORE_WHEN_COPYING_END
Step 7: Clone Simulation Setup (Inside Docker)

Clone the simulation setup repository into the workspace.
(Note: The original step git pull ... assumes a repo is already initialized. git clone is more appropriate for a fresh setup into an empty directory.)

git clone https://github.com/Grkila/Husarion-panther-sim-setup.git .
IGNORE_WHEN_COPYING_START
content_copy
download
Use code with caution.
Bash
IGNORE_WHEN_COPYING_END

(The . at the end clones the contents directly into /ros2_ws instead of into a subdirectory named Husarion-panther-sim-setup.)

You might need to build the workspace if the cloned repository contains source code that needs compilation (e.g., custom ROS 2 packages). If it only contains launch files and configurations that use pre-built packages from the Docker image, a build might not be strictly necessary.
If a build is needed:

# Potentially source ROS 2 setup if not already in .bashrc of the container
# source /opt/ros/humble/setup.bash
colcon build --symlink-install
source install/setup.bash
IGNORE_WHEN_COPYING_START
content_copy
download
Use code with caution.
Bash
IGNORE_WHEN_COPYING_END

(Check the Husarion-panther-sim-setup repository's own README if it specifies build steps.)

Running the Simulation

Connect to the Container:
Open a terminal on your host machine and run:

panther_connect
IGNORE_WHEN_COPYING_START
content_copy
download
Use code with caution.
Bash
IGNORE_WHEN_COPYING_END

This will either attach to the running container or start it if it's stopped, and then attach.

Launch the Simulation (Inside Docker):
Once inside the container's terminal, use the alias created in Step 4:

run_sim
IGNORE_WHEN_COPYING_START
content_copy
download
Use code with caution.
Bash
IGNORE_WHEN_COPYING_END

Gazebo and other simulation windows should appear on your host machine's display.

Troubleshooting

"cannot open display: :0" or GUI issues:

Ensure you ran xhost +local:root on the host before starting/connecting to the container. The panther_connect script attempts this.

Verify your DISPLAY environment variable is correctly set and passed to the container. The docker run command includes --env="DISPLAY".

Ensure the /tmp/.X11-unix volume mount is correct.

panther_connect: "Container ... does not exist."

Make sure you have successfully run the docker run ... command (Step 3) at least once to create the container.

Check if you customized container_name in the panther_connect function and if it matches the --name used in docker run.

Permission Denied for Docker:

Ensure your user is part of the docker group on the host machine (see Prerequisites). You might need to log out and back in.

git clone fails:

Ensure you have network connectivity inside the Docker container (ping google.com). The --network host flag should provide this.

Customization

Container Name: If you change the --name in the docker run command (Step 3), remember to update container_name and exec_target_name in the panther_connect function in your ~/.bashrc accordingly.

This README provides a comprehensive guide. Remember to replace `https://github.com/Grkila/Husarion-panther-sim-setup.git` with the actual URL if it's different or if you intend for users to fork and use their own repository. I've also made the `git` command in step 7 a `git clone` which is more appropriate for pulling code into a fresh `ros2_ws` after clearing it.
IGNORE_WHEN_COPYING_START
content_copy
download
Use code with caution.
IGNORE_WHEN_COPYING_END
