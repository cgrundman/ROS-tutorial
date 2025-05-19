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

## 🧭 ROS Challenge Plan

| # | Theme | Focus | Assignments |
|---|-------|-------|-------------|
| 1	| Core Tools & Concepts | `roscore`, `rosrun`, `rosnode`, `rostopic`, `rosparam`, `rosmsg` | 🔹 Start `roscore` and explore running nodes<br> 🔹 Use `rosrun` and `roslaunch`<br> 🔹 Publish/subscribe to topics with `rostopic`<br> 🔹 Set/get parameters with `rosparam`<br> 🔹 Describe a message with `rosmsg show` |
| 2	| Custom Messages & Services | Create `.msg` and `.srv` files | 🔹 Create a package with custom messages<br> 🔹 Define a custom service<br> 🔹 Build with `catkin_make` and test with `rosservice call` |
| 3	| TF & Coordinate Transforms | `tf` / `tf2` (ROS 1 uses both) | 🔹 Broadcast a simple transform between two frames<br> 🔹 Visualize in RViz<br> 🔹 Use `tf_echo` and `tf_monitor` to debug transforms |
| 4	| Launch Files & Parameters | `roslaunch`, `.yaml`, `rosparam` | 🔹 Create a launch file to start multiple nodes<br> 🔹 Load parameters from a YAML file<br> 🔹 Explore `arg` substitution and parameter namespacing |
| 5	| Bag Files & Logging | `rosbag`, `roswtf`, `rosconsole` | 🔹 Record topics with `rosbag record`<br> 🔹 Play back data with `rosbag play`<br> 🔹 Analyze issues with `roswtf`<br> 🔹 Adjust logging levels |
| 6	| Simulation (Optional) | Gazebo or Stage + RViz | 🔹 Launch a robot in simulation<br> 🔹 View topics and frames<br> 🔹 Simulate sensor data and visualize in RViz |
| 7	| Actions & Multinode | `actionlib`, multiple machines | 🔹 Create an action server and client<br> 🔹 Test behavior using `rqt_action`<br> 🔹 Optionally, try running ROS across two machines (ROS master config) |
| 8	| Mini-Project | Build a complete ROS 1 pipeline | 🔹 Create a simple robot control loop<br> 🔹 Include publishers, subscribers, service/server<br> 🔹 Visualize in RViz or simulate in Gazebo<br> 🔹 Use a launch file with parameters |

## License
This project is licensed under the MIT License. See the [LICENSE](https://github.com/cgrundman/ROS-tutorial/blob/main/LICENSE) file for details.

## Acknowledgements

These tutorials are based on the [ROS Wiki tutorials](https://wiki.ros.org/ROS/Tutorials). Special thanks to the ROS community for providing comprehensive learning resources.
