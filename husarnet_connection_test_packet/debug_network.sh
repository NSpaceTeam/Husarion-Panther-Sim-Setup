#!/bin/bash

# ROS 2 + Husarnet Network Debug Script

echo "=== ROS 2 + Husarnet Network Debug ==="

# Setup environment
source ./setup_husarnet_ros2.sh

echo ""
echo "=== Network Information ==="
if command -v husarnet &> /dev/null; then
    LOCAL_IP=$(husarnet status | grep -A1 "Husarnet IP:" | tail -n1)
    echo "Local Husarnet IP: $LOCAL_IP"
    echo ""
    echo "Connected devices:"
    husarnet status | grep -E "^fc94:" | while read line; do
        ip=$(echo $line | awk '{print $1}')
        name=$(echo $line | awk '{for(i=2;i<=NF;i++) printf "%s ", $i; print ""}' | sed 's/[^a-zA-Z0-9-].*$//')
        echo "  $name: $ip"
    done
fi

echo ""
echo "=== ROS 2 Discovery Information ==="
echo "Available nodes:"
timeout 3s ros2 node list 2>/dev/null || echo "  No nodes found or timeout"

echo ""
echo "Available topics:"
timeout 3s ros2 topic list 2>/dev/null || echo "  No topics found or timeout"

echo ""
echo "Available services:"
timeout 3s ros2 service list 2>/dev/null | head -10 || echo "  No services found or timeout"

echo ""
echo "=== Quick Connectivity Test ==="
echo "Testing topic publication..."
ros2 topic pub --once /debug_test std_msgs/String "data: 'Debug test from $(hostname) at $(date)'" 2>/dev/null
echo "✓ Published debug message to /debug_test"

echo ""
echo "Recent messages on /debug_test:"
timeout 2s ros2 topic echo /debug_test --once 2>/dev/null || echo "  No messages received"

echo ""
echo "=== Troubleshooting Commands ==="
echo "If issues occur, try these commands:"
echo "  ros2 doctor"
echo "  ros2 topic pub /test std_msgs/String 'data: test'"
echo "  ros2 topic echo /test"
echo "  ros2 daemon stop && ros2 daemon start" 