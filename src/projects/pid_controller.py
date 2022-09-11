"""
SDSU Mechatronics / Galanafai Windross / 9-9-2022 / @gweezy on discord
When running autonomously, robots have to maintain certain positions in certain directions.
This is done via 3 PID  controllers. Each for one axis


Goal: Maintain balance of robot based on angles of x y and z axis of robot

"""


def main():
    """Code for creating  pid controllers and testing throttle correction output

    """

    """ create fake imu with simulated input degrees
    these values will change per each cycle of pid correction to test the 3 pid controlers
    """
    x_angle = 9.4
    y_angle = 110.89
    z_angle = 52.55
    fake_imu = RobotImu(x_angle, y_angle, z_angle)

    """Define values that will be used for PID gain values
    User will change these values to best suite the stabilization of these values
    All 3 pid controllers will use the same gain values.
    kp = proporitional gain, ki = integral gain, kd = derivative gain
    Error and integral will be initilized to 0
    """
    kp = 11
    ki = 4.2
    kd = 92
    integral = 0
    error = 0

    """ Create 3 pid controllers for each xyz coordinate plane
    Outputs will be throttle correction in xyz coordinate plane
    """
    pid_controller_x_axis = PidController(kp, ki, kd, integral, error)
    pid_controller_y_axis = PidController(kp, ki, kd, integral, error)
    pid_controller_z_axis = PidController(kp, ki, kd, integral, error)

    """We define the target angles for each xyz axis
    target_x should be 0 degrees
    target_y should be 90 degrees
    targt_z should be 90 degrees
    """
    target_x_angle = 0
    target_y_angle = 90
    target_z_angle = 90

    """ loop is created to test pid_controllers. It will run for 10 times while xyz error angles are changed
    throttle corrections values will be printed for each cycle 
    loop is also used to calibrate pid_controllers with integral changes
    """
    test_cycle = 10
    throttle_correction_x = 0
    throttle_correction_y = 0
    throttle_correction_z = 0
    for i in range(test_cycle):
        """ We calculate pid throttle corection. 
        """
        throttle_correction_x = pid_controller_x_axis.pid_equation(target_x_angle, fake_imu.x_angle)
        throttle_correction_y = pid_controller_y_axis.pid_equation(target_y_angle, fake_imu.y_angle)
        throttle_correction_z = pid_controller_z_axis.pid_equation(target_z_angle, fake_imu.z_angle)
        print("x axis throttle correction = ", throttle_correction_x)
        print("y axis throttle correction = ", throttle_correction_y)
        print("z axis throttle correction = ", throttle_correction_z)
        print(i, " Cycle finished, now changing angle values")
        print()

        """Change current xyz angles by increasing or decreasing them. represent change in angle due to 
        throttle change from pid correction.
        """
        x_angle = x_angle - 4.89
        y_angle = y_angle - 7.78
        z_angle = z_angle + 12.2
        fake_imu.x_angle = x_angle
        fake_imu.y_angle = y_angle
        fake_imu.z_angle = z_angle


class PidController:
    """Create robot_IMU class which will give off simulated values of current angle of each x,y,z value
    These simulated values will be random ints (0-360) degrees
    """
    def __init__(self, kp: float, ki: float, kd: float, integral: float, last_error: float) -> None:
        self.kp = kp
        self.ki = ki
        self.kd = kd
        self.integral = integral
        self.last_error = last_error

    def pid_equation(self, target_angle: float, current_angle: float) -> float:
        """ pid (proportional-integral-derivative gain) equation https://en.wikipedia.org/wiki/PID_controller
        the output is the throttle  for motors to use to correct robots current angle
        """
        curr_error = target_angle - current_angle
        self.integral = self.integral + curr_error * self.ki
        derivative = (curr_error - self.last_error) * self.kd
        self.last_error = curr_error
        pid = derivative + curr_error*self.kp + self.integral
        throttle_correction = pid
        return throttle_correction


class RobotImu:
    """Create robot_IMU class which will give off simulated values of current angle of each x,y,z value
    These simulated values will be floats (0-360) degrees
    """
    def __init__(self, x_angle: float, y_angle: float, z_angle: float) -> None:
        self.x_angle = x_angle
        self.y_angle = y_angle
        self.z_angle = z_angle


if __name__ == "__main__":
    main()
