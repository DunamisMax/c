# C Programming Cheat Sheet

A concise and comprehensive reference for C programming, covering essential concepts, syntax, and examples.

---

## Table of Contents

1. [Basic Structure](#basic-structure)
2. [Data Types & Variables](#data-types--variables)
3. [Operators](#operators)
4. [Control Structures](#control-structures)
5. [Functions](#functions)
6. [Pointers](#pointers)
7. [Arrays & Strings](#arrays--strings)
8. [Structures & Unions](#structures--unions)
9. [Dynamic Memory Allocation](#dynamic-memory-allocation)
10. [File I/O](#file-io)
11. [Preprocessor Directives](#preprocessor-directives)
12. [Common Standard Library Functions](#common-standard-library-functions)
13. [Tips & Best Practices](#tips--best-practices)

---

## Basic Structure

```c
#include <stdio.h>

// Function declarations
int main() {
    // Variable declarations
    printf("Hello, World!\n");
    return 0;
}
```

- **`#include <stdio.h>`**: Includes the Standard Input Output library.
- **`main()`**: Entry point of a C program.
- **`printf`**: Function to print output to the console.
- **`return 0;`**: Indicates successful termination.

---

## Data Types & Variables

| Data Type          | Description                             | Example        |
|--------------------|-----------------------------------------|----------------|
| `int`              | Integer                                 | `int a = 10;`   |
| `float`            | Single-precision floating point         | `float f = 3.14;`|
| `double`           | Double-precision floating point         | `double d = 3.1415;`|
| `char`             | Character                               | `char c = 'A';` |
| `void`             | No type                                 | `void func();` |
| Derived Types      | Arrays, Pointers, Structures, Unions    | `int arr[5];`  |
| Enumerations       | User-defined type with named constants  | `enum Days {Sun, Mon, ...};`|
| `typedef`          | Create alias for types                  | `typedef unsigned long ulong;`|

---

## Operators

| Operator            | Description                                 | Example             |
|---------------------|---------------------------------------------|---------------------|
| Arithmetic          | `+`, `-`, `*`, `/`, `%`                     | `a + b`             |
| Relational          | `==`, `!=`, `>`, `<`, `>=`, `<=`            | `a > b`             |
| Logical             | `&&`, `||`,`!`                              | `a && b`            |
| Bitwise             | `&`, `|`,`^`,`~`,`<<`,`>>`                  | `a & b`             |
| Assignment          | `=`, `+=`, `-=`, `*=`, `/=`, `%=`           | `a += b`            |
| Increment/Decrement | `++`, `--`                                  | `a++`               |
| Ternary             | `?:`                                        | `a > b ? a : b`     |
| Sizeof             | `sizeof()`                                   | `sizeof(int)`       |
| Comma               | `,`                                         | `a = (b, c)`        |
| Pointer Dereference | `*`, `->`                                   | `*ptr`, `ptr->field`|

---

## Control Structures

### Conditional Statements

```c
// If-Else
if (condition) {
    // code
} else if (another_condition) {
    // code
} else {
    // code
}

// Switch
switch (expression) {
    case constant1:
        // code
        break;
    case constant2:
        // code
        break;
    default:
        // code
}
```

### Loops

```c
// For Loop
for (int i = 0; i < 10; i++) {
    // code
}

// While Loop
while (condition) {
    // code
}

// Do-While Loop
do {
    // code
} while (condition);
```

### Jump Statements

```c
break;   // Exit loop or switch
continue; // Skip to next iteration
return;   // Exit function
goto label; // Jump to label
```

---

## Functions

### Declaration & Definition

```c
// Declaration
int add(int a, int b);

// Definition
int add(int a, int b) {
    return a + b;
}
```

### Function Call

```c
int result = add(5, 3);
```

### Recursion Example

```c
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}
```

### Function Pointers

```c
// Declaration
int (*funcPtr)(int, int);

// Assignment
funcPtr = &add;

// Usage
int sum = funcPtr(2, 3);
```

---

## Pointers

### Basics

```c
int a = 10;
int *p = &a; // Pointer to integer
```

### Dereferencing

```c
int value = *p; // Access value at address p
*p = 20;        // Modify value at address p
```

### Pointer Arithmetic

```c
p++; // Moves to next integer location
p--; // Moves to previous integer location
```

### Pointers and Arrays

```c
int arr[5] = {1, 2, 3, 4, 5};
int *p = arr; // Points to first element

// Accessing elements
int first = *p;
int second = *(p + 1);
```

### Pointers to Pointers

```c
int **pp = &p;
```

---

## Arrays & Strings

### Arrays

```c
// Declaration
int numbers[10];
char letters[26];

// Initialization
int primes[5] = {2, 3, 5, 7, 11};
```

### Multidimensional Arrays

```c
int matrix[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
```

### Strings

```c
char str1[] = "Hello";
char str2[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
```

### Common String Functions

| Function       | Description                          | Example                  |
|----------------|--------------------------------------|--------------------------|
| `strlen`       | Get string length                    | `strlen(str)`            |
| `strcpy`       | Copy string                          | `strcpy(dest, src)`      |
| `strcat`       | Concatenate strings                  | `strcat(str1, str2)`     |
| `strcmp`       | Compare two strings                   | `strcmp(str1, str2)`     |
| `strchr`       | Locate character in string           | `strchr(str, 'a')`       |
| `strstr`       | Locate substring in string           | `strstr(str, "sub")`     |

---

## Structures & Unions

### Structures

```c
struct Person {
    char name[50];
    int age;
    float height;
};

// Declaration
struct Person p1;

// Initialization
struct Person p2 = {"Alice", 30, 5.5};

// Accessing members
p1.age = 25;
```

### Nested Structures

```c
struct Address {
    char city[50];
    char country[50];
};

struct Employee {
    char name[50];
    struct Address address;
};
```

### Unions

```c
union Data {
    int i;
    float f;
    char str[20];
};

// Usage
union Data data;
data.i = 10;
data.f = 220.5; // Overwrites i
```

### Typedef with Structures

```c
typedef struct {
    char name[50];
    int id;
} Student;

Student s1;
```

---

## Dynamic Memory Allocation

### `malloc` and `free`

```c
#include <stdlib.h>

// Allocate memory
int *ptr = (int *)malloc(5 * sizeof(int));
if (ptr == NULL) {
    // Handle memory allocation failure
}

// Use memory
ptr[0] = 10;

// Free memory
free(ptr);
```

### `calloc`

```c
int *ptr = (int *)calloc(5, sizeof(int));
```

### `realloc`

```c
ptr = (int *)realloc(ptr, 10 * sizeof(int));
```

---

## File I/O

### Opening and Closing Files

```c
#include <stdio.h>

FILE *fp = fopen("file.txt", "r"); // Modes: "r", "w", "a", "r+", etc.
if (fp == NULL) {
    // Handle error
}

// Close file
fclose(fp);
```

### Reading from a File

```c
char buffer[100];
while (fgets(buffer, sizeof(buffer), fp) != NULL) {
    printf("%s", buffer);
}
```

### Writing to a File

```c
fprintf(fp, "Name: %s, Age: %d\n", name, age);
```

### Binary File I/O

```c
// Writing
fwrite(&data, sizeof(data), 1, fp);

// Reading
fread(&data, sizeof(data), 1, fp);
```

---

## Preprocessor Directives

### Macros

```c
#define PI 3.14159
#define MAX(a,b) ((a) > (b) ? (a) : (b))
```

### Conditional Compilation

```c
#ifdef DEBUG
    printf("Debug mode\n");
#endif

#ifndef PI
    #define PI 3.14159
#endif

#if defined(WIN32) || defined(_WIN32)
    // Windows-specific code
#endif
```

### Include Guards

```c
#ifndef HEADER_FILE_H
#define HEADER_FILE_H

// Header content

#endif // HEADER_FILE_H
```

---

## Common Standard Library Functions

### Input/Output

| Function         | Description                          | Example                          |
|------------------|--------------------------------------|----------------------------------|
| `printf`         | Print to stdout                      | `printf("Hello %s", name);`      |
| `scanf`          | Read from stdin                      | `scanf("%d", &age);`             |
| `fopen`          | Open a file                          | `fopen("file.txt", "r");`        |
| `fclose`         | Close a file                         | `fclose(fp);`                    |
| `fread`          | Read from a file                     | `fread(&data, sizeof(data), 1, fp);`|
| `fwrite`         | Write to a file                      | `fwrite(&data, sizeof(data), 1, fp);`|
| `fgets`          | Read a string from a file            | `fgets(buffer, 100, fp);`        |
| `fputs`          | Write a string to a file             | `fputs("Hello", fp);`            |

### String Manipulation

| Function       | Description                          | Example                  |
|----------------|--------------------------------------|--------------------------|
| `strlen`       | Get length of string                 | `strlen(str)`            |
| `strcpy`       | Copy string                          | `strcpy(dest, src)`      |
| `strncpy`      | Copy n characters of string          | `strncpy(dest, src, n)`  |
| `strcat`       | Concatenate strings                  | `strcat(str1, str2)`     |
| `strcmp`       | Compare two strings                  | `strcmp(str1, str2)`     |
| `strchr`       | Locate character in string           | `strchr(str, 'a')`       |
| `strstr`       | Locate substring in string           | `strstr(str, "sub")`     |

### Memory Management

| Function     | Description                          | Example                      |
|--------------|--------------------------------------|------------------------------|
| `malloc`     | Allocate memory                      | `malloc(sizeof(int) * 5)`    |
| `calloc`     | Allocate and zero-initialize memory  | `calloc(5, sizeof(int))`     |
| `realloc`    | Reallocate memory                    | `realloc(ptr, new_size)`     |
| `free`       | Free allocated memory                | `free(ptr)`                  |

### Miscellaneous

| Function      | Description                          | Example                          |
|---------------|--------------------------------------|----------------------------------|
| `exit`        | Terminate program                    | `exit(0);`                       |
| `atoi`        | Convert string to integer            | `int num = atoi("123");`         |
| `atof`        | Convert string to float              | `float f = atof("3.14");`        |
| `sprintf`     | Print to string                      | `sprintf(str, "Num: %d", num);`  |
| `sscanf`      | Read formatted input from string     | `sscanf(str, "%d", &num);`       |

---

## Tips & Best Practices

- **Use Meaningful Variable Names**: Enhances code readability.
  
- **Initialize Variables**: Prevents undefined behavior.
  
- **Check Return Values**: Always verify the success of functions like `malloc`, `fopen`, etc.
  
- **Avoid Magic Numbers**: Use `#define` or `const` for constants.
  
- **Modular Code**: Break code into functions for reusability and clarity.
  
- **Memory Management**: Ensure every `malloc`/`calloc` has a corresponding `free` to prevent memory leaks.
  
- **Use `const` Correctly**: Protects variables from unintended modifications.
  
- **Comment Wisely**: Explain the why, not the what.
  
- **Consistent Indentation**: Improves code structure and readability.
  
- **Limit Global Variables**: Prefer local variables to reduce dependencies and side-effects.

---

## Example: Simple C Program

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to compute factorial
unsigned long factorial(unsigned int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    char name[50];
    unsigned int num;
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove newline

    printf("Hello, %s!\n", name);

    printf("Enter a number to compute its factorial: ");
    if (scanf("%u", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Factorial of %u is %lu\n", num, factorial(num));
    return 0;
}
```
