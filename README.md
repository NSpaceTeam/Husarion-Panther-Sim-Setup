
# Panther Gazebo Simulation with Docker

This guide provides step-by-step instructions to set up and run the Husarion Panther Gazebo simulation environment using Docker.

## Prerequisites

*   A Linux system (commands are for Debian/Ubuntu-based distributions).
*   An X11 server running (standard on most Linux desktops).

## Installation and Setup

Follow these commands in your terminal.

1.  **Update Package List and Install Docker:**
    ```bash
    sudo apt update
    sudo apt install -y docker.io
    ```

2.  **Enable and Start Docker Service:**
    ```bash
    sudo systemctl enable docker
    sudo systemctl start docker
    ```

3.  **Add Your User to the `docker` Group (Optional but Recommended):**
    This allows you to run `docker` commands without `sudo`.
    ```bash
    sudo usermod -aG docker ${USER}
    ```
    **Important:** You will need to log out and log back in, or open a new terminal session for this change to take effect. You can also temporarily gain group permissions by running `newgrp docker` in your current terminal (this new group membership will only apply to that specific terminal session).

4.  **Pull the Panther Gazebo Docker Image:**
    ```bash
    docker pull husarion/panther-gazebo:humble-ros2-devel
    ```

5.  **Allow Local X11 Connections:**
    This command allows Docker containers to display GUIs on your host machine.
    ```bash
    xhost +local:root
    ```
    *Note: This setting is temporary and will be reset on reboot. You might want to add it to your `~/.xinitrc` or desktop environment's startup scripts if you need it persistently, but be aware of the security implications.*

6.  **Run the Panther Simulation Container (First Time):**
    This command starts the simulation container. It will be named `my_panther_sim`.
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
    After this command, you should be inside the Docker container's shell. You can launch Gazebo or other ROS 2 tools from here. To exit the container's shell, type `exit`. The container will stop.

7.  **Create a Bash Helper Function `panther_connect`:**
    This function will make it easier to start and connect to your `my_panther_sim` container in the future. Paste the entire block below into your terminal and press Enter.
    ```bash
    cat << 'EOF' >> ~/.bashrc

    panther_connect() {
        xhost +local:root
        local container_name="my_panther_sim" # <--- CHANGE THIS if your container name is different
        local exec_target_name="my_panther_sim" # <--- CHANGE THIS if exec target is different from start target (usually the same)

        # Check if the container is currently running
        # docker ps -q filters for quiet (ID only) and -f name filters by exact name
        if [ -n "$(docker ps -q -f name="^${container_name}$")" ]; then
            echo "Container '${exec_target_name}' is active. Attaching with exec..."
            docker exec -it "${exec_target_name}" /bin/bash
        else
            # Check if the container exists (even if stopped)
            # docker ps -aq filters for all (a) quiet (q) and -f name filters by exact name
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
    && source ~/.bashrc
    ```

8.  **Apply Bashrc Changes:**
    For the `panther_connect` function to be available, you need to source your `.bashrc` file or open a new terminal.
    ```bash
    source ~/.bashrc
    ```
9. **Run enviorment**
    ```bash
    panther_connect
    ```
10. **Create Helper function in docker container:**
    this function will make it easier to start the simulation
    ```bash
    echo 'alias run_sim="ros2 launch husarion_ugv_gazebo simulation.launch.py"' >> ~/.bashrc && source ~/.bashrc
    ```
> [!IMPORTANT]
>**DO NOT run**  ``` apt upgrade``` it will **BREAK** simulation
11. **run apt update**
    ```bash
    apt update
    ```
12. **install colcon**
     ```bash
    apt install python3-colcon-common-extensions -y
    ```
13. **install Git**
     ```bash
    apt install git -y
     ```

14. **install  build-essentials**
    ```bash
    apt install build-essential -y
    ```
## Usage

After completing the setup:

1.  **Ensure X11 is configured if you rebooted:**
    If you have rebooted your machine since step 5, you might need to run `xhost +local:root` again.

2.  **Connect to the Panther Simulation:**
    Open a new terminal and simply type:
    ```bash
    panther_connect
    ```
    This will either:
    *   Attach to the already running `my_panther_sim` container.
    *   Start the `my_panther_sim` container if it exists but is stopped, and then attach to it.
    *   Inform you if the container doesn't exist (meaning you need to run the `docker run...` command from step 6 again).
3. **Run gazeboo simulation**
   inside docker container:
   ```bash
   run_sim
   ```

Once inside the container (your terminal prompt will change), you can launch Gazebo, RViz, and other ROS 2 tools as per the Panther documentation. For example:
```bash
ros2 launch panther_gazebo empty_world.launch.py

Managing the Container

To stop the container (from outside, if it's running in detached mode or you exited its shell):

docker stop my_panther_sim
IGNORE_WHEN_COPYING_START
content_copy
download
Use code with caution.
Bash
IGNORE_WHEN_COPYING_END

To remove the container (if you want to start fresh with docker run):
Make sure it's stopped first.

docker rm my_panther_sim
IGNORE_WHEN_COPYING_START
content_copy
download
Use code with caution.
Bash
IGNORE_WHEN_COPYING_END

To list running containers:

docker ps
IGNORE_WHEN_COPYING_START
content_copy
download
Use code with caution.
Bash
IGNORE_WHEN_COPYING_END

To list all containers (including stopped ones):

docker ps -a
IGNORE_WHEN_COPYING_START
content_copy
download
Use code with caution.
Bash
IGNORE_WHEN_COPYING_END
You can copy and paste this entire block into a file named `README.md`.
IGNORE_WHEN_COPYING_START
content_copy
download
Use code with caution.
IGNORE_WHEN_COPYING_END
