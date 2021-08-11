## Mechatronics 2021-2022 Code Styling Guide
##### by Ian Reichard

### What is code style?

Code style is a set of conventions about how to write code. 

### Why do we use code style?

It provides more readability and consistency across a project, and is needed for projects involving multiple people. Code style is an important part of programming because while many forms of code in the same language can be valid context for a compiler, it doesn't make code more human-readable. An important balance should therefore be determined between human-readability ability of code to function. 

### What code style are we using here and why?

Here on the software team, we generally prioritize function over form, but these things need not be mutually exclusive. This style guide is written with that in mind. This is the first time we've written up a style guide, and it's because many of us had issues both reading and testing each other's code (turns out python doesn't like it if you mix spaces and tabs for indentation). This was written up as a solution to ease collaboration.

The code style is written for Python3, as we use it far more than other programming languages. Other languages can be added upon necessity.

### Python3 Style Guide

If you finished the (link to python environment setup) setup guide for python development you're in the right place, otherwise set up your python environment first and come back to this document.

We'll go through each styling decision one-by-one and then have a justification for why each decision was chosen below. If you need to come back and reference this page when writing code, this is where you should bookmark or save the link.

* PEP8: Follow [PEP8](https://www.python.org/dev/peps/pep-0008/) rules for spacing, docstring inclusion, etc, except where noted below.

* Character limit: Do not go over 80 characters on one line.
To avoid doing this on accident, I recommend turning off word wrap in your editor and keeping a mental note of where the 80 character limit is. 

* Spaces vs Tabs: Use Tabs (4 spaces) for indentation. 
To alter your indentation in Pycharm, go to `File > Settings > Editor > Code Style > Python`. Switch to `Tabs`, turn on `Smart Tabs`, and change indent size to `4` if not done already.
  
* Docstrings: Use docstrings for top of file, functions, class definitions, and member methods that are not basic mutator/accessor/getter/setter methods. If you have a basic mutator/accessor/getter/setter method, you can leave an empty docstring as long as you provide a specifier for input or return type (see below).
Python docstrings are done with 3 double quotes,
  ```python
  """This is a top of file docstring before any import statements.
  """
  
  def main() -> None:
    """This is a function docstring.
    """
    pass
  
  class Car:
    """This is a class docstring.
    """
    def __init__(self, color: str) -> None:
      self.color = color
  
    def make_red(self) -> None:
      """This is a method docstring.
      """
      self.color = 'red'
  
  ```
* Comments:
    1. Comment your code if your docstring is not sufficient to explain what you are doing for one line or a group of lines. Python has some complicated one-liners that abstract code to C/C++ functions. It's recommended to comment such one-liners on the line before to explain what the abstracted code is doing.
    2. Comment to answer the question *why* you're doing something with your code, rather than *what* your code is doing.
    3. Do not comment every line of code you write. I don't care what your professors told you. Commenting every line of code is almost worse than not commenting at all.
    4. Generally avoid in-line comments. The best use for in-line comments are one to five word brief explanations for why a particular line in a function is doing something.
    5. The 80 character limit applies to comments too! You should use code blocks with triple single quotes `'''Multiline Block Comment Here'''` to comment longer strings rather than going over the 80 character limit.
    
* Function Annotation: 
    Use function annotations to specify return types and argument types. Examples will be provided below.
  