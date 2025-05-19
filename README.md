## Panther Simulation with Docker Setup

This guide provides step-by-step instructions to set up and run the Husarion Panther UGV simulation in a Docker container using ROS 2 Humble.

## Prerequisites

1.  **Linux Operating System:** These instructions are tailored for a Linux environment.
2.  **Docker Engine (CLI):** You must install Docker Engine.
    *   **IMPORTANT:** **Do NOT install Docker Desktop.** Docker Desktop for Linux creates its own VM which can complicate X11 forwarding and device access for robotics simulations.
    *   Follow the official Docker Engine installation guide for your Linux distribution: [Install Docker Engine](https://docs.docker.com/desktop/setup/install/linux/ubuntu/)
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
```
### Step 1: Add panther_connect Bash Function

This function helps you easily connect to (or start and connect to) your Panther simulation Docker container.

copy this command in terminal
```bash
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
EOF && source ~/.bashrc
```

This command allows Docker containers running as root to connect to your host's X server for GUI applications (like Gazebo). The panther_connect function also runs this, but it's good to run it once initially.
```
xhost +local:root
```


(Note: xhost +local:root is generally safe for local development. For more security-conscious setups, explore xauth methods.)

### Step 2: Run the Panther Docker Container

This command will download the Panther simulation Docker image (if not already present) and start a new container named my_panther_sim.
```bash
docker run -it \
  --name my_panther_sim \
  --env="DISPLAY" \
  --env="QT_X11_NO_MITSHM=1" \
  --volume="/tmp/.X11-unix:/tmp/.X11-unix:rw" \
  --network host \
  --privileged \
  husarion/panther-gazebo:humble-ros2-devel
```

You should now be inside the Docker container's terminal. If you exit this terminal, the container will stop. You can use panther_connect (from Step 1) in a new host terminal to restart and/or re-enter it.

The following steps are to be performed inside the Docker container's terminal.

If you are not already inside, open a new host terminal and run:
```bash
panther_connect
```

This creates a convenient alias to launch the Gazebo simulation.
```bash
echo 'alias run_sim="ros2 launch husarion_ugv_gazebo simulation.launch.py"' >> ~/.bashrc && source ~/.bashrc
```
### Step 3: Install Dependencies (Inside Docker)

Update package lists and install necessary tools for building ROS 2 packages and managing dependencies.
```bash
apt update && apt install -y python3-colcon-common-extensions git build-essential nano gedit python3-rosdep && rosdep init && rosdep update
```
(Note: rosdep init might say "already initialized" if the base image did it, which is fine. rosdep update is still important.)

### Step 4: Prepare ros2_ws (Inside Docker)

Navigate to the ros2_ws (ROS 2 workspace) directory and clear any existing content to prepare for a fresh clone.
```bash
cd /ros2_ws && rm -rf * .git
```
### Step 5: Clone Simulation Setup (Inside Docker)

Clone the simulation setup repository into the workspace.
(Replace https://github.com/Grkila/Husarion-panther-sim-setup.git with your repository URL if different.)

# Ensure you are in /ros2_ws
```bash
cd /ros2_ws
```
# Clone the repository contents into the current directory (/ros2_ws)
```bash
git clone https://github.com/Grkila/Husarion-panther-sim-setup.git .
```

(The . at the end of git clone ... . clones the contents of the repository directly into the current directory /ros2_ws instead of into a subdirectory named after the repository.)

Build the Workspace (if needed):
If the cloned repository contains custom ROS 2 packages with source code, you'll need to build the workspace:

# Optional: Source ROS 2 environment if not already in the container's .bashrc
# source /opt/ros/humble/setup.bash

# Build the workspace
colcon build --symlink-install

# Source the new workspace's setup file
source install/setup.bash
# You might want to add this sourcing command to your ~/.bashrc in the container
echo "source /ros2_ws/install/setup.bash" >> ~/.bashrc



(Check the Husarion-panther-sim-setup repository's own README if it specifies particular build steps or if a build is necessary.)

# Running the Simulation

Connect to the Container:
Open a terminal on your host machine and run:
```bash 
panther_connect
````
This will either attach to the running container or start it if it's stopped, and then attach.

Launch the Simulation (Inside Docker):
Once inside the container's terminal, use the alias created in Step 4:
```bash
run_sim
```

