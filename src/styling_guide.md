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

* PEP8: Follow [PEP8](https://www.python.org/dev/peps/pep-0008/) rules for spacing, docstring inclusion, etc. except where noted below.


* Character limit: Do not go over 120 characters on one line.
To avoid doing this on accident, I recommend turning off word wrap in your editor and keeping a mental note of where the 120 character limit is. 


* Spaces vs Tabs: Use 4 spaces for indentation. This is actually consistent with PEP8 but is worth noting here.
To alter your indentation in Pycharm, go to `File > Settings > Editor > Code Style > Python`. Switch to `Spaces` if not that already and change indent size to `4` if not done already.
  

* Docstrings: Use docstrings for top of file, functions, class definitions, and member methods that are not basic mutator/accessor/getter/setter methods or a class's init method. If you have a basic mutator/accessor/getter/setter method or init method, you can leave an empty docstring as long as you provide a specifier for input or return type (see below). If you override a superclass's method, comments are OPTIONAL, but recommended for why you're overriding a superclass method. 

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

* Meaningful variable names in snake_case:
Use snake_case in Python for naming files, functions, member methods, and variable names. Classes should use PascalCase. Variable names should be named meaningfully such that they are not ambiguous, but not overexplained.
  ```
    Poor variable names:
    r
    x
    return_value_from_function
  ```
  ```
    Good variable names:
    radius
    graph_1_x_axis
    ret_val
  ```
    In this example, `r` and `x` are poor variable named because they are ambiguous. `r` can be used for a return value, a radius, or other variable names. `x` could refer to different x-values in a graph or the entire x-axis. `return_value_from_function` is not ambiguous, but is overexplained. A return value name could be far more basic. After renaming these variables, we can see that `radius` could still be ambiguous and it depends on the use case. If this function is graphing a circle on a graph, we can use `radius` in this context without it being ambiguous. This will ultimately be up to the judgement of the programmer. `graph_1_x_axis` is less ambiguous and clearly refers to some list or custom data structure holding data about the x-axis of a graph. `ret_val` is shorter than `return_value_from_function` but is equally unambiguous. It gets to the point without being too long.


* Comments:
    1. Comment your code if your docstring is not sufficient to explain what you are doing for one line or a group of lines. Python has some complicated one-liners that abstract code to C/C++ functions. It's recommended to comment such one-liners on the line before to explain what the abstracted code is doing.
    2. Comment to answer the question *why* you're doing something with your code, rather than *what* your code is doing, except for abstracted C/C++ functions mentioned earlier.
    3. Do not comment every line of code you write. I don't care what your professors told you. Commenting every line of code is almost worse than not commenting at all.
    4. Generally avoid in-line comments. The best use for in-line comments are one to five word brief explanations for why a particular line in a function is doing something.
    5. The 80 character limit applies to comments too! You should use code blocks with triple single quotes `'''Multiline Block Comment Here'''` to comment longer strings rather than going over the 120 character limit.
    

* Function Annotation: 
    DO use function annotations to specify return types and argument types. This is not a requirement of PEP but can be helpful for not only sharing code, but also forces you to consider data types and possibly avoiding exceptions from poor argument passing. If your function has no return value, you still need to specify using python's function annotation operator `->` and specify the `None` type.
  
    ```python
  # Function has both arguments and a return value
    def add(a, b):  # Wrong
        return a + b
  
    def add(a: int, b: int) -> int:  # Correct
        return a + b
  
  # Function has arguments but no return value
    def clear_list(l):  # Wrong
      l.clear()
    
    def clear_list(l: list) -> None:  # Correct
      l.clear()
  
  # Function has a return value but no arguments
    def get_random_float():  # Wrong
      return random()
    
    def get_random_float() -> float:  # Correct
      return random()
  
  # Function has no arguments and no return value
    def main_loop():  # Wrong
      while True:
        pass
  
    def main_loop() -> None:  # Correct
      while True:
        pass
  
  ```
    More code examples and justification will be provided below in the justification section.

### Justification

* PEP8 is a great way to write python code with the standard python library, and many IDEs come with it enabled by default as a way to format code. It's better to have a consistent and widely used standard than everyone writing code in their own way in a project like this one to improve readability. PEP8 only covers a few basics for code style and is thus [meant to be modified by project-specific code style needs](https://www.python.org/dev/peps/pep-0008/#introduction): `Many projects have their own coding style guidelines. In the event of any conflicts, such project-specific guides take precedence for that project.`


* Character limits exist for a variety of reasons, the original one being for 80-character wide terminals, but it still exists today at 120 characters for a few reasons:
    1. Reading code quicker when more narrow instead of wider on a larger 16:9 monitor
    2. Multiple monitors, vertical monitors, split terminals are common for productivity
    3. Word wrapping is great for writing docs (I'm using it right now to write this) but is terrible for writing code


* Spaces vs Tabs for indentation is an argument that's been around on the internet forever that I'm not really interested in entertaining but Python3 notably is not designed to mix and match the two. Adhereing to the PEP8 standard, we'll just use 4 spaces and be consistent with it, as most IDEs come with spaces enabled, and it makes code easier to work with in text editors in some cases. In other languages such as C/C++ you can use either tabs or spaces where the parser doesn't care.


* Docstrings are also part of the PEP8 standard, but I've included a couple of exceptions for classes in the code style. Comments should serve a purpose instead of commenting just to comment something, and in some specific cases you're just commenting code for the sake of fullfilling the PEP8 parser and not seeing errors.
You can take a look at [example 0](example/styling_guide_ex_0.py) for an Object-Oriented example in python to understand where you should use docstrings. Anything commented out with # is  my comments about styling and shouldn't be used in actual code.

* Meaningful variable names are important to improve code readability in all programming languages. In other programming languages where other problems persist more for readability such as namespaces in C++, but one of the main problems for readability we have to deal with in Python is good variable naming.

* Comments are hard to enforce in a styling guide and are largely up to the judgement of the programmer for when to include. Some basic guidelines are necessary such as providing *meaningful* comments and not commenting every line. Often a docstring can cover your bases in smaller functions for why code is functioning in a certain way, but for longer parts of code it may be better to use comments throughout at logical breaks. You can refer to styling guide example 4(link to example 4 here) for examples of short functions that don't need comments, as docstrings suffice for these.


* Function annotation is necessary in python. Python has many advantages when it comes to quickly developing code and abstracting away much of the direct memory management, but this can come costs like type errors. We can try to reduce some of these type errors by using function annotations. Let's look at an example of some [C code](example/styling_guide_ex_3.c) and compare it with some [Python code](example/styling_guide_ex_4.py) that both calculate the fibonacci sequence to 10 numbers to understand why these function annotations are important.

    ```c
    int* fibonacci(int num_a, int num_b) {
  
  }
    ```
  If you've never seen or written C code before and have only seen Python you might be a bit lost at this function definition. What's important to note is the data types of the arguments, in this case `num_a` and `num_b` being ints, and the return type, in this case being an int pointer, are built into the function's definition. Sending an incorrect data type to the function while writing code will be caught by C's parser (most of the time), and you will get a syntax error before your code even runs. This is something python doesn't have, where for example an incorrect string concactenation from an int and string can result in an error at runtime. We can use try catch blocks to try to handle some of these errors, but we can also write code with data types in mind from the beginning, which is exactly what we do here.

Now check out example 4 and note the two fibonacci sequence calculation functions. Run the code if you want to verify they both do the same thing,
```
First function: [0, 1, 1, 2, 3, 5, 8, 13, 21, 34]
Second function: [0, 1, 1, 2, 3, 5, 8, 13, 21, 34]
```
Even though the code functions the same way, one of these functions is more human-readable than the other in the function definition because we know what the argument types and return types are,
```python
def fibonacci_wrong(num_a, num_b):
    ...
def fibonacci_correct(num_a: int, num_b: int) -> list:
    ...
```
This, again, is a very basic example, but it demonstrates the point being made here, that argument and return types do matter for human readability.

### Compare and Contrast

Now that we've gone through the entire style guide, let's look at examples [of bad code](example/styling_guide_ex_1.py) and [of good code](example/styling_guide_ex_2.py) and see why the code in 1 is bad and why the code in 2 is good for this style. 

```python
from collections import deque
```
The import statement here is good, but it's missing a docstring before at the top of the file.

```python
def p(d):
    try:
        r = d.pop()
    except IndexError as e:
        return None
    d.append(r)
    return r
```

This function has several styling issues. The first is variable and function naming. If you're familiar with data structures, you might recognize the `pop` function from a stack. We can see below in the driver code that a collections.deque object is passed to this `p` function. A deque object is a double-ended queue that can do both stack and queue operations. So, let's rename the d in the function name to be an input deque and add the function annotation for the argument. 

```python
def p(input_deque: deque):
    try:
        r = d.pop()
    except IndexError as e:
        return None
    d.append(r)
    return r
```

If we aren't getting anything from our `pop` operation, then nothing is in the deque, so a try catch block is needed to catch an `IndexError` and return that nothing was found. This would be a great place to denote a comment that we found an empty deque. It might also be good to print that we had an `IndexError` for debugging purposes, so let's add that too.

```python
def p(input_deque: deque):
    try:
        r = input_deque.pop()
    except IndexError as e:  # Empty Deque
        print(e)
        return None
    input_deque.append(r)
    return r
```

`r` looks to be doing nothing more than being our return value, so let's rename it to a more meaningful and less ambiguous variable name such as `ret_val`:

```python
def p(input_deque: deque):
    try:
        ret_val = input_deque.pop()
    except IndexError as e:  # Empty Deque
        print(e)
        return None
    input_deque.append(ret_val)
    return ret_val
```

Now we can get a better look at what this function is doing. We're getting the top value of the stack (right side of the deque) and returning it, otherwise returning a NoneType object. If you know data structures, you might recognize this as a peek operation where you get the top value of a stack without modifying the stack. Python's deque object doesn't implement this function on its own, so it seems to be implemented here in this function. Now with this information, we can rename the function name and add some documentation for why this function exists:

```python
def peek(input_deque: deque):
    """Python's collections.deque doesn't have a peek method.
    This functionality is needed for the project later, so it is defined here.
    Deep copy of the deque not needed before passing a deque to this function,
    it will return an unmodified deque.
    :param input_deque: Deque object
    """
    try:
        ret_val = input_deque.pop()
    except IndexError as e:  # Empty Deque
        print(e)
        return None
    input_deque.append(ret_val)
    return ret_val
```

The only thing left is to define the return value in the function annotation. A deque can have any object in it returned from a pop operation and we're using a NoneType object as a return value, so `any` is our return value for this function. We should also denote it in the docstring for what return values to expect.

```python
def peek(input_deque: deque) -> any:
    """Python's collections.deque doesn't have a peek method.
    This functionality is needed for the project later, so it is defined here.
    Deep copy of the deque not needed before passing a deque to this function,
    it will return an unmodified deque.
    :param input_deque: Deque object
    :return: None if Deque object has no entires, rightmost entry in deque
    otherwise
    """
    try:
        ret_val = input_deque.pop()
    except IndexError as e:  # Empty Deque
        print(e)
        return None
    input_deque.append(ret_val)
    return ret_val
```

We're done! This is exactly how the code looks in example 2 for how it should be written. Don't write your code like example 1 initially and convert it like 2 later, write it with the style in mind. Otherwise, you'll have to go through some sleuthing and variable renaming like we just did which takes up time you could be using elsewhere.
