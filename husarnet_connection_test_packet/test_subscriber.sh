#!/bin/bash

# Simple ROS 2 Test Subscriber
# Listens for test messages over Husarnet

echo "=== ROS 2 Test Subscriber ==="

# Setup environment
source ./setup_husarnet_ros2.sh

echo ""
echo "Listening for messages on /test_topic..."
echo "Will show messages from all devices in the Husarnet network"
echo "Press Ctrl+C to stop"
echo ""

# Listen for messages
ros2 topic echo /test_topic 