# ROS Tutorial Repository

This repository contains tutorial materials for learning Robot Operating System (ROS), created by following the [ROS Wiki tutorials](https://wiki.ros.org/ROS/Tutorials).

## About

The tutorials in this repository are designed to help beginners understand the core concepts of ROS, including:

- Navigating the ROS filesystem
- Creating and building ROS packages
- Understanding nodes, topics, services, and parameters
- Writing simple publisher and subscriber nodes in Python

## Getting Started

To get started with these tutorials:

1. **Install ROS**: Follow the [Installing and Configuring Your ROS Environment](https://wiki.ros.org/ROS/Tutorials/InstallingandConfiguringROSEnvironment) guide to set up your ROS environment.

2. **Clone this repository**:

```bash
git clone https://github.com/cgrundman/ROS-tutorial.git
```

3. **Navigate to the workspace**:

```bash
cd ROS-tutorial/r1_wiki_ws
```

4. **Build the workspace**:

```bash
catkin_make
```

5. **Source the setup file**:

```bash
source devel/setup.bash
```

6. **Follow the tutorials**: Each tutorial is located in the r1_wiki_ws/src directory. Refer to the [ROS Wiki tutorials](https://wiki.ros.org/ROS/Tutorials) for detailed instructions.

## License
This project is licensed under the MIT License. See the [LICENSE](https://github.com/cgrundman/ROS-tutorial/blob/main/LICENSE) file for details.

## Acknowledgements

These tutorials are based on the [ROS Wiki tutorials](https://wiki.ros.org/ROS/Tutorials). Special thanks to the ROS community for providing comprehensive learning resources.
