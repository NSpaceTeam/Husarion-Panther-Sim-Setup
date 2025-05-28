#!/bin/bash

# Husarnet ROS 2 Configuration Script
# Source this script before running any ROS 2 nodes for cross-device communication

echo "=== Setting up Husarnet + ROS 2 Environment ==="

# Source ROS 2
if [ -z "$ROS_DISTRO" ]; then
    if [ -f "/opt/ros/humble/setup.bash" ]; then
        source /opt/ros/humble/setup.bash
        echo "✓ ROS 2 Humble sourced"
    elif [ -f "/opt/ros/foxy/setup.bash" ]; then
        source /opt/ros/foxy/setup.bash
        echo "✓ ROS 2 Foxy sourced"
    else
        echo "✗ ROS 2 not found!"
        exit 1
    fi
else
    echo "✓ ROS 2 $ROS_DISTRO already sourced"
fi

# Check Husarnet
if ! command -v husarnet &> /dev/null; then
    echo "✗ Husarnet not installed!"
    exit 1
fi

if ! husarnet status | grep -q "Is joined.*yes"; then
    echo "✗ Husarnet not joined to a network!"
    exit 1
fi

echo "✓ Husarnet connected"

# Clear any conflicting configuration
unset ROS_DISCOVERY_SERVER
unset FASTRTPS_DEFAULT_PROFILES_FILE

# Set up Husarnet + ROS 2 environment
export RMW_IMPLEMENTATION=rmw_fastrtps_cpp
export ROS_DOMAIN_ID=42
export FASTRTPS_DEFAULT_PROFILES_FILE=/var/tmp/husarnet-fastdds-simple.xml

# Generate Husarnet DDS configuration
if command -v husarnet-dds &> /dev/null; then
    echo "✓ Generating Husarnet DDS configuration..."
    husarnet-dds singleshot > /dev/null 2>&1
    echo "✓ Configuration ready!"
else
    echo "✗ husarnet-dds not installed!"
    echo "Install with:"
    echo "  RELEASE=\"v1.3.5\" && ARCH=\"amd64\""
    echo "  sudo curl -L https://github.com/husarnet/husarnet-dds/releases/download/\$RELEASE/husarnet-dds-linux-\$ARCH -o /usr/local/bin/husarnet-dds"
    echo "  sudo chmod +x /usr/local/bin/husarnet-dds"
    exit 1
fi

echo ""
echo "🎉 Husarnet ROS 2 environment ready!"
echo ""
echo "Environment variables set:"
echo "  RMW_IMPLEMENTATION: $RMW_IMPLEMENTATION"
echo "  ROS_DOMAIN_ID: $ROS_DOMAIN_ID"
echo "  FASTRTPS_DEFAULT_PROFILES_FILE: $FASTRTPS_DEFAULT_PROFILES_FILE"
echo ""
echo "Now you can run any ROS 2 nodes and they will communicate across Husarnet!"
echo ""
echo "Examples:"
echo "  ros2 run demo_nodes_py talker"
echo "  ros2 run demo_nodes_py listener"
echo "  ros2 topic pub /test std_msgs/String 'data: Hello Husarnet'"
echo "  ros2 topic echo /test"
echo "  ros2 run your_package your_node" 