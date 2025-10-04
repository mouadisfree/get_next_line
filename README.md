Here’s a the **get_next_line** project at 1337 School.

---


# Get Next Line - File Reading Made Easy  
![Get Next Line Banner](https://github.com/user-attachments/assets/e8935e0c-2d46-4f31-b44a-3730b81a00db)

*A project to master efficient file reading in C*  

---

## Overview  

**Get Next Line (GNL)** is a project from the 1337 School curriculum that challenges students to implement a function capable of reading a line from a file descriptor, no matter its size or format. This project emphasizes memory management, static variables, and efficient file I/O in C.  

---

## Key Objectives  
- Understand and manage memory allocation dynamically.  
- Work with **static variables** to maintain the state between function calls.  
- Develop a deeper understanding of file descriptors and how to handle them.  
- Build a robust and reusable function for line-by-line file reading.  

---

## Features  
- Read a single line from a file descriptor, including `stdin`.  
- Handle files of arbitrary size efficiently.  
- Process files with varying line lengths.  
- Handle multiple file descriptors simultaneously (Bonus part).  

---

## Function Prototype  

```c  
char *get_next_line(int fd);  
```  

---

## Getting Started  

### Prerequisites  
To use this project, you need:  
- A working C compiler, such as `gcc`.  
- A UNIX-like operating system (Linux, macOS).  

### Installation  
1. Clone the repository:  
   ```bash  
   git clone git@github.com:mouadisfree/get_next_line.git
   cd get_next_line  
   ```  

2. Compile the library with your program:  
   ```bash  
   gcc -Wall -Wextra -Werror your_program.c get_next_line.c get_next_line_utils.c -o your_program  
   ```  

---

## Usage  

1. Include the function in your program:  
   ```c  
   #include "get_next_line.h"  
   ```  

2. Use `get_next_line` to read lines from a file or `stdin`:  
   ```c  
   int fd = open("file.txt", O_RDONLY);  
   char *line;  

   while ((line = get_next_line(fd)) != NULL)  
   {  
       printf("%s", line);  
       free(line);  
   }  
   close(fd);  
   ```  

---

## Project Structure  

| File                     | Description                                      |  
|--------------------------|--------------------------------------------------|  
| `get_next_line.c`        | Contains the main implementation of the function.|  
| `get_next_line_utils.c`  | Helper functions for `get_next_line`.            |  
| `get_next_line.h`        | Header file with function prototypes.            |  

---

## Testing  

### Compile and Run  
To test the function, you can create a test file and run the following:  
1. Compile:  
   ```bash  
   gcc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c -o gnl_test  
   ```  

2. Run with a file:  
   ```bash  
   ./gnl_test <file_name>  
   ```  

### Testers  
You can use popular GitHub testers to verify your implementation:  
1. [42cursus_gnl_tests](https://github.com/Tripouille/gnlTester)  
2. [gnl-unit-tests](https://github.com/alelievr/gnl_unit_test)  
3. [gnl-war-machine](https://github.com/Sherchryst/gnl-war-machine)  

---

## Bonus Features  

- **Multi-file descriptor support**:  
   Handle multiple files simultaneously using `get_next_line` on different file descriptors.  
   ```c  
   int fd1 = open("file1.txt", O_RDONLY);  
   int fd2 = open("file2.txt", O_RDONLY);  

   char *line1 = get_next_line(fd1);  
   char *line2 = get_next_line(fd2);  

   printf("File1: %s\n", line1);  
   printf("File2: %s\n", line2);  

   free(line1);  
   free(line2);  
   close(fd1);  
   close(fd2);  
   ```  

---

## Author  

Developed by **mokatfi** as part of the curriculum at **1337 School**, a member of the 42 Network.  

---

## License  

This project is intended for educational purposes and is subject to the rules and policies of 1337 School. Redistribution or plagiarism is strictly prohibited.  

---

## Acknowledgments  

Special thanks to 1337 School for their peer-to-peer learning environment and the challenging projects that help us grow as developers.  
