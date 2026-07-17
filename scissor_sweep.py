#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from robotiq_3f_interfaces.msg import IndependentControlCommand
import math
import time


class ScissorSweepNode(Node):
    def __init__(self):
        super().__init__('scissor_sweep_node')
        self.pub = self.create_publisher(IndependentControlCommand, 'independent_control_command', 10)

        # Tunable parameters
        self.rate_hz = 20.0
        self.period_seconds = 4.0   # time for one full sweep (0 -> 1 -> 0)
        self.finger_position = 0.3
        self.finger_velocity = 0.4
        self.finger_force = 0.4
        self.scissor_velocity = 0.4
        self.scissor_force = 0.4

        self.start_time = time.time()
        self.timer = self.create_timer(1.0 / self.rate_hz, self.timer_callback)

    def triangle_wave(self, t: float) -> float:
        phase = (t % self.period_seconds) / self.period_seconds  # 0..1
        if phase < 0.5:
            return phase * 2.0          # 0 -> 1
        else:
            return (1.0 - phase) * 2.0  # 1 -> 0

    def timer_callback(self):
        t = time.time() - self.start_time
        scissor_pos = self.triangle_wave(t)

        msg = IndependentControlCommand()
        msg.finger_a_position = self.finger_position
        msg.finger_b_position = self.finger_position
        msg.finger_c_position = self.finger_position
        msg.scissor_position = scissor_pos

        msg.finger_a_velocity = self.finger_velocity
        msg.finger_b_velocity = self.finger_velocity
        msg.finger_c_velocity = self.finger_velocity
        msg.scissor_velocity = self.scissor_velocity

        msg.finger_a_force = self.finger_force
        msg.finger_b_force = self.finger_force
        msg.finger_c_force = self.finger_force
        msg.scissor_force = self.scissor_force

        self.pub.publish(msg)
        self.get_logger().info(f'scissor_position: {scissor_pos:.2f}')


def main():
    rclpy.init()
    node = ScissorSweepNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()