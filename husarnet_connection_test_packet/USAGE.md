# Husarnet + ROS 2 Configuration Scripts

These scripts make it easy to test ROS 2 communication over Husarnet with any nodes.

## 📁 Scripts Overview

### Core Configuration
- **`setup_husarnet_ros2.sh`** - Main configuration script (source this first)

### Test Scripts  
- **`test_publisher.sh`** - Simple message publisher
- **`test_subscriber.sh`** - Simple message subscriber
- **`node_runner.sh`** - Run any ROS 2 node with Husarnet config
- **`debug_network.sh`** - Debug ROS 2 + Husarnet connectivity

## 🚀 Quick Start

### 1. Basic Setup (on each device)
```bash
# Source the configuration
source ./setup_husarnet_ros2.sh
```

### 2. Test with Simple Publisher/Subscriber
**Device 1:**
```bash
./test_publisher.sh
```

**Device 2:**
```bash
./test_subscriber.sh
```

### 3. Run Any ROS 2 Node
```bash
# Demo nodes
./node_runner.sh demo_nodes_py talker
./node_runner.sh demo_nodes_py listener

# Turtlesim
./node_runner.sh turtlesim turtlesim_node

# Your custom nodes
./node_runner.sh your_package your_node --param value
```

### 4. Debug Network Issues
```bash
./debug_network.sh
```

## 💡 Manual Usage

After sourcing `setup_husarnet_ros2.sh`, you can run any ROS 2 commands normally:

```bash
# Source configuration once
source ./setup_husarnet_ros2.sh

# Then run any ROS 2 commands
ros2 run demo_nodes_py talker
ros2 topic pub /test std_msgs/String "data: 'Hello'"
ros2 topic echo /test
ros2 launch your_package your_launch_file.py
```

## 🔧 Environment Variables Set

The configuration script sets:
- `RMW_IMPLEMENTATION=rmw_fastrtps_cpp`
- `ROS_DOMAIN_ID=42`
- `FASTRTPS_DEFAULT_PROFILES_FILE=/var/tmp/husarnet-fastdds-simple.xml`

## 📋 Prerequisites

1. **ROS 2** (Humble or Foxy) installed
2. **Husarnet** installed and joined to network
3. **husarnet-dds** utility installed:
   ```bash
   RELEASE="v1.3.5" && ARCH="amd64"
   sudo curl -L https://github.com/husarnet/husarnet-dds/releases/download/$RELEASE/husarnet-dds-linux-$ARCH -o /usr/local/bin/husarnet-dds
   sudo chmod +x /usr/local/bin/husarnet-dds
   ```

## 🐛 Troubleshooting

1. **Run debug script:**
   ```bash
   ./debug_network.sh
   ```

2. **Check ROS 2 daemon:**
   ```bash
   ros2 daemon stop
   ros2 daemon start
   ```

3. **Verify Husarnet:**
   ```bash
   husarnet status
   ```

4. **Test basic connectivity:**
   ```bash
   source ./setup_husarnet_ros2.sh
   ros2 topic list
   ros2 node list
   ```

## 📝 Examples

### Custom Message Publisher
```bash
source ./setup_husarnet_ros2.sh
ros2 topic pub /my_topic geometry_msgs/Twist "{linear: {x: 1.0}, angular: {z: 0.5}}"
```

### Service Call
```bash
source ./setup_husarnet_ros2.sh
ros2 service call /my_service std_srvs/Trigger
```

### Launch File
```bash
source ./setup_husarnet_ros2.sh
ros2 launch my_package my_launch.py
```

All ROS 2 communication will automatically work across Husarnet-connected devices! 