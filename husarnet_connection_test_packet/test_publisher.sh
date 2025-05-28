#!/bin/bash

# Simple ROS 2 Test Publisher
# Publishes test messages over Husarnet

echo "=== ROS 2 Test Publisher ==="

# Setup environment
source ./setup_husarnet_ros2.sh

echo ""
echo "Publishing test messages to /test_topic..."
echo "Messages will be visible on all devices in the Husarnet network"
echo "Press Ctrl+C to stop"
echo ""

# Publish messages in a loop
counter=0
while true; do
    message="Hello from $(hostname) - Message $counter"
    ros2 topic pub --once /test_topic std_msgs/String "data: '$message'"
    echo "Published: $message"
    counter=$((counter + 1))
    sleep 2
done 