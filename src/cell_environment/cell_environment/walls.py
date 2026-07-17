import rclpy
from rclpy.node import Node

from moveit_msgs.msg import PlanningScene, CollisionObject
from shape_msgs.msg import SolidPrimitive
from geometry_msgs.msg import Pose


class WallScenePublisher(Node):
    def __init__(self):
        super().__init__('wall_scene_publisher')

        self.publisher_ = self.create_publisher(PlanningScene, '/planning_scene', 10)

        self.timer = self.create_timer(2.0, self.publish_scene_once)
        self.published = False

    def make_box(self, object_id, frame_id, size_xyz, pos_xyz):
        obj = CollisionObject()
        obj.header.frame_id = frame_id
        obj.id = object_id

        primitive = SolidPrimitive()
        primitive.type = SolidPrimitive.BOX
        primitive.dimensions = list(size_xyz)

        pose = Pose()
        pose.orientation.w = 1.0
        pose.position.x = pos_xyz[0]
        pose.position.y = pos_xyz[1]
        pose.position.z = pos_xyz[2]

        obj.primitives.append(primitive)
        obj.primitive_poses.append(pose)
        obj.operation = CollisionObject.ADD
        return obj

    def publish_scene_once(self):
        if self.published:
            return

        frame_id = 'base_link'

        back_wall = self.make_box(
            'back_wall',
            frame_id,
            (0.0508, 1.6256, 1.6256),
            (-0.8382, 0.0, 0.8128)
        )

        right_wall = self.make_box(
            'right_wall',
            frame_id,
            (1.6256, 0.0508, 1.6256),
            (0.0, -0.8182, 0.8128)
        )

        left_wall = self.make_box(
            'left_wall',
            frame_id,
            (0.0508, 1.6256, 1.6256),
            (0.8128, 0.0, 0.8128)
        )

        table_slab = self.make_box(
            'table_slab',
            frame_id,
            (0.6096, 0.4572, 0.0508),
            (0.0, 0.8182, -0.2286)
        )

        scene = PlanningScene()
        scene.is_diff = True
        scene.world.collision_objects.append(back_wall)
        scene.world.collision_objects.append(right_wall)
        scene.world.collision_objects.append(left_wall)
        scene.world.collision_objects.append(table_slab)
        self.publisher_.publish(scene)
        self.get_logger().info('Published back_wall, right_wall, left_wall, and table_slab to planning scene.')
        self.published = True


def main(args=None):
    rclpy.init(args=args)
    node = WallScenePublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()