# ft_printf() Project

## Introduction

Welcome to the `ft_printf()` project! In this project, you will delve into the intricacies of a widely used and versatile C function called `printf()`. This exercise offers an excellent opportunity to enhance your programming skills and gain a deeper understanding of variadic functions in the C programming language. The challenge level of this project is moderate, making it a valuable learning experience for programmers of various skill levels.

### Project Goals

The primary objective of this project is to implement your version of the `printf()` function, named `ft_printf()`. By completing this task, you will achieve the following:

- **Language**: Your project must be written in C.

- **Norm Compliance**: Your project must be written in accordance with the Norm. If you have bonus files/functions, they are included in the norm check, and you will receive a 0 if there is a norm error inside.

- **Stability**: Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc.) apart from undefined behaviors. If this happens, your project will be considered non-functional and will receive a 0 during the evaluation.

- **Memory Management**: All heap allocated memory space must be properly freed when necessary. No leaks will be tolerated.

- **Makefile**: If the subject requires it, you must submit a Makefile that will compile your source files to the required output with the flags -Wall, -Wextra, and -Werror, using cc, and your Makefile must not relink. Your Makefile must at least contain the rules $(NAME), all, clean, fclean, and re.

- **Bonuses**: To turn in bonuses to your project, you must include a rule bonus in your Makefile, which will add all the various headers, libraries, or functions that are forbidden in the main part of the project. Bonuses must be in a different file _bonus.{c/h} if the subject does not specify anything else. Mandatory and bonus part evaluation is done separately.

- **Libft Integration**: If your project allows you to use your libft, you must copy its sources and its associated Makefile into a libft folder with its associated Makefile. Your project’s Makefile must compile the library by using its Makefile, then compile the project.
