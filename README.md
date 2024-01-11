# Simple Shell Project

This is the Simple Shell project, a UNIX command line interpreter, completed as a group project for ALX Software Engineering School. The project was carried out by a team consisting of Muhammad Usman and Rodgers Wisdom.

## Project Overview

The Simple Shell project is an essential part of the ALX curriculum, designed to challenge students in the following areas:

- Basics of programming
- Basics of C
- Basics of thinking like an engineer
- Group work
- Learning how to learn

## Important Instructions

Before you begin the project, make sure to understand and follow these important instructions:

1. **Framework and Guidelines:** Familiarize yourself with the ALX SE framework, available [here](https://intranet.alxswe.com/concepts/559). It provides essential guidelines for the project.

2. **Avoid Copying Solutions:** It is strictly prohibited to look at or copy solutions from other people, including fellow students or online articles/videos.

3. **Learning Process:** Focus on understanding the solutions and learning how to approach problems. Do not simply memorize or copy solutions.

4. **Use of AI Tools:** While ChatGPT and similar AI tools are allowed, they should be used in a learning context. Do not use them to directly code the solution.

5. **Pair Programming:** This project is a group project, and both team members are responsible for the code pushed to GitHub. Work together, and ensure both partners understand every line of code.

6. **Plagiarism Warning:** If caught for plagiarism, both team members will be held responsible. It is essential to communicate and work collaboratively.

## Project Learning Objectives

By the end of this project, you are expected to be able to explain the following concepts without relying on external sources:

- Who designed and implemented the original Unix operating system
- Who wrote the first version of the UNIX shell
- Who invented the B programming language (the direct predecessor to the C programming language)
- Who is Ken Thompson
- How does a shell work
- What is a PID and a PPID
- How to manipulate the environment of the current process
- What is the difference between a function and a system call
- How to create processes
- What are the three prototypes of main
- How does the shell use the PATH to find programs
- How to execute another program with the execve system call
- How to suspend the execution of a process until one of its children terminates
- What is EOF / "end-of-file"?

## Project Structure

The project is divided into several tasks, each building upon the previous ones. Below is an overview of the tasks completed:

1. **Task 0: Betty would be proud**
   - Write clean code that passes the Betty checks.

2. **Task 1: Simple shell 0.1**
   - Write a UNIX command line interpreter.
   - Display a prompt and wait for the user to type a command.
   - Handle errors and "end of file" condition.
   
3. **Task 2: Simple shell 0.2**
   - Handle command lines with arguments.

4. **Task 3: Simple shell 0.3**
   - Handle the PATH.
   - Do not call `fork` if the command doesn’t exist.

5. **Task 4: Simple shell 0.4**
   - Implement the `exit` built-in, which exits the shell.

6. **Task 5: Simple shell 1.0**
   - Implement the `env` built-in, which prints the current environment.

## Compilation and Testing

To compile the shell, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

To run the shell interactively:

```bash
./hsh
```

To run the shell in non-interactive mode:

```bash
echo "/bin/ls" | ./hsh
```

## Authors

- Muhammad Usman
- Rodgers Wisdom

## Copyright

© 2024 ALX, All rights reserved.
