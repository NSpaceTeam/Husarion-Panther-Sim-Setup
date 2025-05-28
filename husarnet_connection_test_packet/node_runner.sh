#!/bin/bash

# Generic ROS 2 Node Runner for Husarnet
# Usage: ./node_runner.sh <package_name> <node_name> [additional_args]

if [ $# -lt 2 ]; then
    echo "Usage: $0 <package_name> <node_name> [additional_args]"
    echo ""
    echo "Examples:"
    echo "  $0 demo_nodes_py talker"
    echo "  $0 demo_nodes_py listener"
    echo "  $0 turtlesim turtlesim_node"
    echo "  $0 your_package your_node --param value"
    exit 1
fi

PACKAGE_NAME=$1
NODE_NAME=$2
shift 2  # Remove first two arguments
ADDITIONAL_ARGS="$@"

echo "=== ROS 2 Node Runner ==="
echo "Package: $PACKAGE_NAME"
echo "Node: $NODE_NAME"
if [ -n "$ADDITIONAL_ARGS" ]; then
    echo "Additional args: $ADDITIONAL_ARGS"
fi

# Setup environment
source ./setup_husarnet_ros2.sh

echo ""
echo "Starting node..."
echo "Press Ctrl+C to stop"
echo ""

# Run the node
if [ -n "$ADDITIONAL_ARGS" ]; then
    ros2 run $PACKAGE_NAME $NODE_NAME $ADDITIONAL_ARGS
else
    ros2 run $PACKAGE_NAME $NODE_NAME
fi 