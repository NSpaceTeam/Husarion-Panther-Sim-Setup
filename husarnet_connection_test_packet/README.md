# 🚀 Husarnet Connection Test Packet

**Complete ROS 2 + Husarnet connectivity testing toolkit for ERC and beyond!**

This package contains everything you need to test ROS 2 communication over Husarnet VPN with any nodes.

## 📦 What's Included

- ✅ **Automatic configuration scripts**
- ✅ **Test publisher/subscriber**
- ✅ **Generic node runner**
- ✅ **Network debugging tools**
- ✅ **Complete documentation**

## 🎯 Perfect For

- **ERC connectivity testing**
- **Multi-device ROS 2 development**
- **Remote robotics testing**
- **Cross-platform ROS 2 communication**

## ⚡ Quick Start

1. **Extract and setup:**
   ```bash
   cd husarnet_connection_test_packet
   chmod +x *.sh
   ```

2. **Test connection:**
   ```bash
   # Device 1
   ./test_publisher.sh
   
   # Device 2  
   ./test_subscriber.sh
   ```

3. **Run any ROS 2 node:**
   ```bash
   ./node_runner.sh your_package your_node
   ```

## 📋 Files

| File | Description |
|------|-------------|
| `setup_husarnet_ros2.sh` | Main configuration script |
| `test_publisher.sh` | Simple test publisher |
| `test_subscriber.sh` | Simple test subscriber |
| `node_runner.sh` | Generic node runner |
| `debug_network.sh` | Network debugging |
| `USAGE.md` | Detailed usage guide |
| `README.md` | This file |

## 🔧 Prerequisites

1. **ROS 2** (Humble/Foxy) installed
2. **Husarnet** installed and joined to network
3. **husarnet-dds** utility (auto-installed by scripts)

## 💡 Key Features

- ✅ **Zero manual configuration** - scripts handle everything
- ✅ **Works with any ROS 2 nodes** - not just demos
- ✅ **Cross-device communication** - over Husarnet VPN
- ✅ **ERC compliant** - uses Fast DDS as required
- ✅ **Debug tools included** - troubleshoot connectivity issues
- ✅ **Platform independent** - works on any Linux with ROS 2

## 🎉 Success Guaranteed

These scripts use the **official Husarnet method** with `husarnet-dds` utility, ensuring reliable cross-device ROS 2 communication every time!

**Ready to test? See `USAGE.md` for detailed instructions!** 