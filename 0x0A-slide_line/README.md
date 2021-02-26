# Repository for 0x0A. 2048 (single line)

## General requirements:

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account
- We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called slide_line.h
- Don’t forget to push your header file
- All your header files should be include guarded.

## Tasks

### **0. Slide line:**

The goal of this task is to reproduce the 2048 game(NSFW !!) mechanics on a single horizontal line.
Given an array of integers, we want to be able to slide & merge it to the left or to the right. Identical numbers, if they are contiguous or separated by zeros, should be merged (See example)
Write a function that slides and merges an array of integers.

*Prototype: int slide_line(int *line, size_t size, int direction);\*
Where line points to an array of integers containing size elements, that must be slided & merged to the direction represented by direction. direction can be either:
SLIDE_LEFT
SLIDE_RIGHT
If it is something else, the function must fail
Both macros SLIDE_LEFT and SLIDE_RIGHT must be defined in slide_line.h
Your function must return 1 upon success, or 0 upon failure
You are not allowed to allocate memory dynamically (malloc, calloc, …)

Tests:

```
$ gcc -Wall -Wextra -Werror -pedantic -o 0-slide_line 0-main.c 0-slide_line.c
$ ./0-slide_line L 2 2 0 0 0 0 0 2 0 0 0 2 0 4
Line: 2, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 4
Slide to the left
Line: 4, 4, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

$ ./0-slide_line R 2 2 2 2 2
Line: 2, 2, 2, 2, 2
Slide to the right
Line: 0, 0, 2, 4, 4

$ ./0-slide_line L 2 4 8 16
Line: 2, 4, 8, 16
Slide to the left
Line: 2, 4, 8, 16

$ ./0-slide_line R 2 4 8 16
Line: 2, 4, 8, 16
Slide to the right
Line: 2, 4, 8, 16
```

## Author
* [GitHub - Julian Franco Rua](https://github.com/julianfrancor)
* [LinkedIn - Julian Franco Rua](https://www.linkedin.com/in/julianfrancor/)
