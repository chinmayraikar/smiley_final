import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
import numpy as np
from robot_interfaces.msg import Velocity, BnoReading
import math 

class Buttonlist:
    def __init__(self, msg: Joy):
        try:
            # Analog inputs
            self.Vy = msg.axes[1] # Drive y 
            self.Vx = msg.axes[0] # Drive x 
            self.Vz = msg.axes[3] # Rotate z 

        except IndexError:
            # Fallback if axes/buttons aren't fully populated
            self.Vy = self.Vx = self.Vz = 0.0
        
class JoyInput(Node):
    def __init__(self):
        super().__init__('motor_node')
        self.joy_sub = self.create_subscription(Joy, '/joy', self.joy_subscriber_callback, 10)
        self.bno_sub = self.create_subscription(BnoReading, '/current_angle', self.bno_callback, 10)
        self.vel_pub = self.create_publisher(Velocity, '/cmd_vel', 10)
        
        self.current_angle = 0.0

        self.velmsg = Velocity()

    def bno_callback(self, msg):
        self.current_angle = self.normalize_angle(msg.current_angle)

    def normalize_angle(self, angle):
        # Keeps angle in degrees between -180 and 180
        while angle > 180.0:
            angle -= 360.0
        while angle < -180.0:
            angle += 360.0
        return angle

    def scaling(self):
        self.velmsg.vx *= 180.0
        self.velmsg.vy *= 180.0
        self.velmsg.vw *= 180.0
        
    def joy_subscriber_callback(self, msg):
        self.inputs = Buttonlist(msg)
        self.velmsg = Velocity()

        # Apply a cubic curve for finer control
        temp_vx = self.inputs.Vx ** 5
        temp_vy = self.inputs.Vy ** 5
        temp_vz = self.inputs.Vz ** 5

        theta_rad = math.radians(self.current_angle)

        # Field Centric Drive Kinematics
        self.velmsg.vx = -(temp_vx * math.cos(theta_rad) + temp_vy * math.sin(theta_rad))
        self.velmsg.vy = -temp_vx * math.sin(theta_rad) + temp_vy * math.cos(theta_rad)
        self.velmsg.vw = temp_vz         

        # Scale the velocities
        self.scaling()

        # Publish
        self.vel_pub.publish(self.velmsg)
        
def main():
    rclpy.init()
    rclpy.spin(JoyInput())
    rclpy.shutdown() 

if __name__ == '__main__':
    main()