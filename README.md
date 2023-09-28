# Exception Handling in C++

This C++ program illustrates the concept of exception handling when performing division. It showcases how to handle exceptions thrown when attempting to divide by zero.

## Getting Started
### Prerequisites

You need a C++ compiler to build and run this program. If you don't have one installed, you can download and install one like [g++](https://gcc.gnu.org/).

### Or Use IDE
1. Download and install CodeBlocks or any C++ IDE if you do not already have it installed.
2. Download the main.cpp file.
3. Add it to your C++ project.
4. Run the project application.


### Code Explanation
This program demonstrates exception handling when performing division. Here's a brief overview of what each part of the code does:

1. It includes the necessary C++ standard library headers.

2. The <b>'divide'</b> function takes two integer arguments and performs division. If the second argument is zero, it throws an exception with the message "Division by zero is not allowed."

3. In the <b> main() </b> function:

    * It prompts the user to enter two numbers.
    * It calls the <b>' divide' </b> function and wraps it in a try-catch block.
    * If division is successful, it prints the result.
    * If an exception is caught, it prints the error message.
4. The program returns 0, indicating successful execution.

### License
This code is licensed under the MIT License.


