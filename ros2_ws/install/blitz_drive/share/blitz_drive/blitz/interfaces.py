from blitz import Blitz
from robot_interfaces.msg import BnoReading
from robot_interfaces.msg import Velocity

blitz_interfaces = {str : Blitz}

# ============================================
# DRIVE ESP INTERFACES (mcu_pio)
# BNO sensor + drive motors + VL53L0X ToF
# ============================================
blitz_interfaces = {

    "BnoReading" : Blitz(
        topic="current_angle",
        msg_id=1,
        struct_fmt="fff",
        fields=["current_angle","pitch","roll"],
        ros_msg=BnoReading,
        from_mcu=True
    ),

    "Velocity" : Blitz(
        topic="cmd_vel",
        msg_id=5,
        struct_fmt="fff",
        fields=["vx","vy","vw"],
        ros_msg=Velocity,
        from_mcu=False
    )
}
