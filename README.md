# get_next_line - My File Reader Function


*My file reading line by line project*
---
## What is this?
**get_next_line** is a function that reads files line by line that I wrote myself. It's a school project that helps me learn how to manage memory and read files efficiently in C. I'll use this function in other projects later.get_next_line** project at 1337 School.

---

## What I Built

### Main Function
- **File Reading**: `get_next_line` - reads one line at a time
- **Memory Management**: handles dynamic memory allocation
- **Static Variables**: remembers where it stopped reading

### Helper Functions
- **String Tools**: joining strings, finding characters
- **Memory Tools**: allocating and freeing memory safely
- **File Tools**: reading from file descriptors

### Bonus Features
- `Multiple files`: Read from different files at the same time
- `Any file size`: Works with small and huge files
- `Any line length`: Handles short and very long lines

---

## How to use it

### What you need
To use this function, you need:
- A C compiler (like `gcc`) to turn code into programs.
- A computer with Linux or macOS.

### How to set it up
1. Download the code:
   ```bash
   git clone git@github.com:mouadisfree/get_next_line.git
   cd get_next_line


2. Build with your program:
   ```bash
   gcc -Wall -Wextra -Werror your_program.c get_next_line.c get_next_line_utils.c -o your_program
   ```

   This compiles my function with your code.

---

## Who made this
Made by **mouadisfree** as a student at **1337 School** (part of the 42 coding schools).

---

## Thanks
Thanks to 1337 School and all my peers who helped me learn!
