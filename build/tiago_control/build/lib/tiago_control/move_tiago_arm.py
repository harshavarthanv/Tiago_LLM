import rclpy
from rclpy.node import Node
from moveit_commander import MoveGroupCommander, RobotCommander, PlanningSceneInterface
from geometry_msgs.msg import Pose
import sys


class TiagoArmController(Node):
    def __init__(self, mode):
        super().__init__('tiago_arm_controller')

        # Initialize MoveIt interfaces
        self.robot = RobotCommander()
        self.scene = PlanningSceneInterface()
        self.arm_group = MoveGroupCommander('arm')

        # Execute based on mode
        if mode == "pick":
            self.move_to_pick_pose()
        elif mode == "home":
            self.move_to_home_pose()
        else:
            self.get_logger().error(f"Unknown mode '{mode}'. Use 'pick' or 'home'.")

    def move_to_pick_pose(self):
        self.get_logger().info("Moving to PICK pose...")

        pose = Pose()
        pose.position.x = 0.5
        pose.position.y = 0.0
        pose.position.z = 1.0
        pose.orientation.w = 1.0

        self.arm_group.set_pose_target(pose)
        success = self.arm_group.go(wait=True)
        self.arm_group.stop()
        self.arm_group.clear_pose_targets()

        if success:
            self.get_logger().info("Arm moved to pick pose.")
        else:
            self.get_logger().error("Failed to move to pick pose.")

    def move_to_home_pose(self):
        self.get_logger().info("Moving to HOME pose...")

        home_joint_positions = {
            'arm_1_joint': 0.5000004416428325,
            'arm_2_joint': -1.3399972588761573,
            'arm_3_joint': -0.4799962431831961,
            'arm_4_joint': 1.9399743478678353,
            'arm_5_joint': -1.4900026612574395,
            'arm_6_joint': 1.3700221748879748,
            'arm_7_joint': -0.0000035082035445554993,
        }

        self.arm_group.set_joint_value_target(home_joint_positions)
        success = self.arm_group.go(wait=True)
        self.arm_group.stop()
        self.arm_group.clear_pose_targets()

        if success:
            self.get_logger().info("Arm moved to home pose.")
        else:
            self.get_logger().error("Failed to move to home pose.")


def main(args=None):
    rclpy.init(args=args)
    mode = "pick"  # default

    for i, arg in enumerate(sys.argv):
        if arg == "--mode" and i + 1 < len(sys.argv):
            mode = sys.argv[i + 1]

    node = TiagoArmController(mode)
    rclpy.spin_once(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
