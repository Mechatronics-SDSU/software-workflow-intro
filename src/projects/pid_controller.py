"""
SDSU Mechatronics / Galanafai Windross / 9-9-2022 / @gweezy on discord
When running autonomously, robots have to maintain certain positions in certain directions.
This is done via a PID  controller.

Goal: Maintain balance of robot based on angle from ground.

"""

class RobotImu:
    """Create robot_IMU class which will give off simulated values of current angle from ground
    These simulated values will be random ints (0-360) degrees
    robot_IMU will take the PID output for the throttle it  would need to correct its angle to target
    """
    def __init__(self, target_angle , current_angle, throttle):
        self.target_angle = target_angle
        self.current_angle = current_angle
        self.throttle = throttle