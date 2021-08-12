"""Styling guide example 0 file contains code for explaining what is and isn't a relevant docstring to write.
This is meant to be run as main as a test example.

This is a top of file docstring and is required for every single file to explain the contents of the entire file and
what its purpose is. If you can't think of what to write here consider what someone reading this for the first time
might need to know about this file.
Try and answer some of these questions if you're not sure:
Should this file be imported?
Should this file be run as main?
If this is a large file, does it need a diagram or explanation of what's going on here?
"""


class Car:
    """This class is used to demo some basic OOP code and show where you should write docstrings.
    """
    # init does NOT need a docstring for PEP8
    def __init__(self, color: str) -> None:
        self._color = color
        self._max_speed = 120
        self._current_speed = 0
        self._acceleration = 0

    # This IS a basic accessor/getter method and does NOT require a docstring
    # You can tell because it is called get_[class member]
    # You can include the empty docstring shown below to satisfy a PEP8 parser
    def get_color(self) -> str:
        """."""
        return self._color

    # This IS a basic mutator/settor method and does NOT require a docstring
    # You can tell because it is called set_[class member]
    # You can include the empty docstring shown below to satisfy a PEP8 parser
    def set_color(self, new_color: str) -> None:
        """."""
        self._color = new_color

    # This is NOT a basic mutator/settor method and DOES require a docstring
    # You can tell because it's not only setting a protected/private member of a class, it does other work and has
    # a return value.
    def acclerate(self, acceleration: float) -> float:
        """
        Accelerates the car for 1 second, adds it to the speed of the car.
        :param acceleration: how much to increase the car's velocity by.
        :return: current speed
        """
        self._acceleration = acceleration
        self._current_speed += self._acceleration
        return self._current_speed

    # This is an override of a superclass's method and does NOT require a docstring but adding information IS
    # recommended to explain why you're overriding a method.
    def __str__(self) -> str:
        """Overriding the str method to show what color and speed/acceleration the car has.
        :return: Overridden string method
        """
        return f'Car object with color {self._color} and speed {self._current_speed}/{self._max_speed} ' \
               f'at acceleration {self._acceleration}.'


# This is the main function of the file and requires a docstring.
def main() -> None:
    """Runs demo driver code for our car class.
    """
    test_car = Car('red')
    print(test_car)
    test_car.set_color('blue')
    test_car.acclerate(4)
    print(test_car)


# If __name__ == '__main__' does not need a dostring but should be noted at the top of the file that this is meant to
# be run as the main file and not being imported.
if __name__ == '__main__':
    main()
