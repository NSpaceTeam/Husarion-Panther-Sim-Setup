# Husarion UGV ROS 2 Docker Setup

This project provides a Dockerized environment for running the `husarion_ugv_ros` stack for ROS 2 Jazzy, primarily for simulation purposes. It includes a setup script to build the Docker image and configure convenient aliases for launching the container with different GPU configurations.

## Prerequisites

Before you begin, ensure you have the following installed on your **host Linux system**:

1.  **Docker Engine:** Follow the official Docker installation guide for your Linux distribution.
2.  **Git:** For cloning repositories if needed.
3.  **(For NVIDIA GPU Users)**
    *   NVIDIA Drivers for Linux.
    *   NVIDIA Container Toolkit (`nvidia-docker2`).
4.  **(For AMD GPU Users)**
    *   Up-to-date Mesa drivers for your AMD GPU/APU.
5.  **X11 Server:** Standard on most Linux desktop environments.

## Files

*   `Dockerfile`: Defines the Docker image, installing ROS 2 Jazzy, `husarion_ugv_ros`, and its dependencies.
*   `entrypoint.sh`: Script executed when the Docker container starts. It sources the ROS 2 and workspace environments.
*   `setup_docker.sh`: A shell script to automate building the Docker image and adding run aliases to your `.bashrc`.

## Setup Instructions

1.  **Clone/Download Files:**
    Ensure `Dockerfile`, `entrypoint.sh`, and `setup_docker.sh` are in the same directory.

2.  **Make `setup_docker.sh` Executable:**
    Open a terminal in the directory containing the files and run:
    ```bash
    chmod +x setup_docker.sh
    ```

3.  **Run the Setup Script:**
    Execute the script:
    ```bash
    ./setup_docker.sh
    ```
    This script will:
    *   Build the Docker image (default name: `my-husarion-app:jazzy`). You can change this in the script.
    *   Add aliases to your `$HOME/.bashrc` file for running the container with different GPU options.

4.  **Source `.bashrc`:**
    For the new aliases to take effect in your current terminal session, source your `.bashrc` file or open a new terminal:
    ```bash
    source ~/.bashrc
    ```

5.  **Allow X Server Connections (for GUI applications):**
    To enable Docker containers to display GUIs (like Gazebo or Rviz) on your host's screen, run the following command in your host terminal. This is typically needed once per X server session (e.g., after a reboot).
    ```bash
    xhost +local:docker
    ```
    *Note: `xhost +local:docker` is convenient for local development but reduces X server security by allowing any local user to connect. For more secure environments, explore other X11 forwarding methods.*

## Running the Docker Container

After setup, you can use the following aliases to run the container:

*   **No Dedicated GPU Acceleration:**
    Uses software rendering (LLVMpipe) inside the container. Suitable if you don't have a compatible GPU or don't need high graphics performance.
    ```bash
    run_husarion_nogpu
    ```
    This alias expands to (approximately):
    ```bash
    docker run -it --rm \
        --cpus="4" -m "8g" \
        --env="DISPLAY" --env="QT_X11_NO_MITSHM=1" \
        --volume="/tmp/.X11-unix:/tmp/.X11-unix:rw" \
        --name husarion_nogpu \
        my-husarion-app:jazzy bash
    ```

*   **NVIDIA GPU Acceleration:**
    Requires NVIDIA drivers and NVIDIA Container Toolkit on the host.
    ```bash
    run_husarion_nvidia
    ```
    This alias expands to (approximately):
    ```bash
    docker run -it --rm \
        --cpus="4" -m "8g" \
        --env="DISPLAY" --env="QT_X11_NO_MITSHM=1" \
        --volume="/tmp/.X11-unix:/tmp/.X11-unix:rw" \
        --gpus all \
        --name husarion_nvidia \
        my-husarion-app:jazzy bash
    ```

*   **AMD GPU Acceleration:**
    Requires appropriate Mesa drivers on the host.
    ```bash
    run_husarion_amd
    ```
    This alias expands to (approximately, group ID might vary):
    ```bash
    docker run -it --rm \
        --cpus="4" -m "8g" \
        --env="DISPLAY" --env="QT_X11_NO_MITSHM=1" \
        --volume="/tmp/.X11-unix:/tmp/.X11-unix:rw" \
        --device=/dev/dri:/dev/dri \
        --group-add=$(getent group video | cut -d: -f3 || getent group render | cut -d: -f3) \
        --name husarion_amd \
        my-husarion-app:jazzy bash
    ```

    *(The `--cpus` and `-m` values are defaults set in `setup_docker.sh` and can be modified there or by editing the aliases in your `.bashrc` directly.)*

## Inside the Container

Once the container is running, you'll be at a bash prompt inside the Docker environment. The ROS 2 Jazzy environment and your Husarion workspace (`/husarion_ws` or `/ros2_ws` as per your Dockerfile) will be sourced.

You can now run ROS 2 commands:

*   **Launch Gazebo Simulation:**
    ```bash
    ros2 launch husarion_ugv_gazebo core_gazebo.launch.py
    ```
    (Or other Gazebo launch files from `husarion_ugv_gazebo`)

*   **Launch Rviz2:**
    In a *new terminal*, first attach to the *same running container*:
    If you named your container (e.g., `husarion_amd`):
    ```bash
    docker exec -it husarion_amd bash
    ```
    Then, inside this new container terminal:
    ```bash
    ros2 launch husarion_ugv_viz view_robot.launch.py
    ```

## Troubleshooting GPU Access

*   **General:** Ensure `xhost +local:docker` has been run on the host.
*   **NVIDIA:**
    *   Verify `nvidia-smi` works on the host.
    *   Ensure NVIDIA Container Toolkit is correctly installed.
    *   Check Docker daemon logs (`sudo journalctl -u docker.service`) for errors related to the NVIDIA runtime.
*   **AMD:**
    *   Verify `glxinfo -B` on the host shows your AMD GPU and direct rendering.
    *   Ensure your user on the host is part of the `video` and/or `render` group (`sudo usermod -aG video $USER && sudo usermod -aG render $USER`, then log out/in).
    *   Check permissions of `/dev/dri/*` devices.
    *   Inside the container, run `glxinfo -B`. It should show your AMD GPU, not `llvmpipe`.

## Customization

*   **Image Name & Resource Limits:** You can change the `IMAGE_NAME`, `CPU_LIMIT`, and `MEMORY_LIMIT` variables at the top of `setup_docker.sh` before running it.
*   **Aliases:** After running the setup script, you can manually edit the aliases in your `~/.bashrc` file if you need further customization.

This comprehensive setup should make it much easier to manage and run your Husarion Docker environment!