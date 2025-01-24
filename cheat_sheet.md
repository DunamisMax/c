# C Programming Cheat Sheet

## Table of Contents

- [C Programming Cheat Sheet](#c-programming-cheat-sheet)
  - [Table of Contents](#table-of-contents)
  - [Basic Syntax](#basic-syntax)
  - [Data Types](#data-types)
  - [Variables](#variables)
  - [Constants](#constants)
  - [Operators](#operators)
    - [Arithmetic Operators](#arithmetic-operators)
    - [Relational Operators](#relational-operators)
    - [Logical Operators](#logical-operators)
    - [Bitwise Operators](#bitwise-operators)
    - [Assignment Operators](#assignment-operators)
  - [Control Flow](#control-flow)
    - [If-Else](#if-else)
    - [Switch](#switch)
    - [Loops](#loops)
      - [For Loop](#for-loop)
      - [While Loop](#while-loop)
      - [Do-While Loop](#do-while-loop)
  - [Functions](#functions)
  - [Arrays](#arrays)
  - [Pointers](#pointers)
  - [Strings](#strings)
  - [Structures](#structures)
  - [File I/O](#file-io)
  - [Preprocessor Directives](#preprocessor-directives)
  - [Memory Management](#memory-management)
  - [Common Libraries](#common-libraries)

---

## Basic Syntax

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

- `#include <stdio.h>`: Includes the standard input-output library.
- `int main()`: The main function where program execution begins.
- `printf("Hello, World!\n");`: Prints "Hello, World!" to the console.
- `return 0;`: Indicates that the program ended successfully.

---

## Data Types

| Data Type | Size (bytes) | Description                     |
|-----------|--------------|---------------------------------|
| `int`     | 4            | Integer                         |
| `float`   | 4            | Single-precision floating point |
| `double`  | 8            | Double-precision floating point |
| `char`    | 1            | Character                       |
| `void`    | -            | No type                         |

---

## Variables

```c
int age = 25;
float salary = 50000.50;
char grade = 'A';
```

- **Declaration**: `int age;`
- **Initialization**: `int age = 25;`
- **Naming Rules**:
  - Must start with a letter or underscore.
  - Can contain letters, digits, and underscores.
  - Case-sensitive.

---

## Constants

```c
#define PI 3.14159
const int MAX_USERS = 100;
```

- `#define`: Preprocessor directive to define a constant.
- `const`: Keyword to define a constant variable.

---

## Operators

### Arithmetic Operators

- `+` (Addition)
- `-` (Subtraction)
- `*` (Multiplication)
- `/` (Division)
- `%` (Modulus)

### Relational Operators

- `==` (Equal to)
- `!=` (Not equal to)
- `>` (Greater than)
- `<` (Less than)
- `>=` (Greater than or equal to)
- `<=` (Less than or equal to)

### Logical Operators

- `&&` (Logical AND)
- `||` (Logical OR)
- `!` (Logical NOT)

### Bitwise Operators

- `&` (AND)
- `|` (OR)
- `^` (XOR)
- `~` (NOT)
- `<<` (Left shift)
- `>>` (Right shift)

### Assignment Operators

- `=` (Assignment)
- `+=` (Add and assign)
- `-=` (Subtract and assign)
- `*=` (Multiply and assign)
- `/=` (Divide and assign)
- `%=` (Modulus and assign)

---

## Control Flow

### If-Else

```c
if (condition) {
    // code to execute if condition is true
} else {
    // code to execute if condition is false
}
```

### Switch

```c
switch (expression) {
    case constant1:
        // code to execute if expression == constant1
        break;
    case constant2:
        // code to execute if expression == constant2
        break;
    default:
        // code to execute if expression doesn't match any case
}
```

### Loops

#### For Loop

```c
for (initialization; condition; increment) {
    // code to execute
}
```

#### While Loop

```c
while (condition) {
    // code to execute
}
```

#### Do-While Loop

```c
do {
    // code to execute
} while (condition);
```

---

## Functions

```c
// Function Declaration
int add(int a, int b);

// Function Definition
int add(int a, int b) {
    return a + b;
}

// Function Call
int result = add(5, 3);
```

- **Return Type**: `int`, `float`, `void`, etc.
- **Parameters**: Variables passed to the function.
- **Return Statement**: Returns a value from the function.

---

## Arrays

```c
int numbers[5] = {1, 2, 3, 4, 5};
```

- **Declaration**: `int numbers[5];`
- **Initialization**: `int numbers[5] = {1, 2, 3, 4, 5};`
- **Accessing Elements**: `numbers[0]` (first element)

---

## Pointers

```c
int var = 20;
int *ptr = &var;

printf("%d", *ptr); // Output: 20
```

- `&`: Address-of operator.
- `*`: Dereference operator.

---

## Strings

```c
char name[] = "John";
```

- **Declaration**: `char name[50];`
- **Initialization**: `char name[] = "John";`
- **String Functions**: `strlen()`, `strcpy()`, `strcat()`, `strcmp()`

---

## Structures

```c
struct Person {
    char name[50];
    int age;
};

struct Person person1;
strcpy(person1.name, "John");
person1.age = 30;
```

- **Declaration**: `struct Person { ... };`
- **Initialization**: `struct Person person1;`
- **Accessing Members**: `person1.name`, `person1.age`

---

## File I/O

```c
FILE *file = fopen("file.txt", "r");

if (file == NULL) {
    printf("Error opening file\n");
    return 1;
}

char ch;
while ((ch = fgetc(file)) != EOF) {
    printf("%c", ch);
}

fclose(file);
```

- **Modes**: `"r"` (read), `"w"` (write), `"a"` (append), `"r+"` (read/write)
- **Functions**: `fopen()`, `fclose()`, `fgetc()`, `fputc()`, `fscanf()`, `fprintf()`

---

## Preprocessor Directives

```c
#include <stdio.h>
#define PI 3.14159
#ifdef DEBUG
    // Debugging code
#endif
```

- `#include`: Includes a file.
- `#define`: Defines a macro.
- `#ifdef`, `#ifndef`, `#endif`: Conditional compilation.

---

## Memory Management

```c
int *ptr = (int *)malloc(5 * sizeof(int));

if (ptr == NULL) {
    printf("Memory allocation failed\n");
    return 1;
}

free(ptr);
```

- `malloc()`: Allocates memory.
- `calloc()`: Allocates and initializes memory to zero.
- `realloc()`: Reallocates memory.
- `free()`: Frees allocated memory.

---

## Common Libraries

- **`<stdio.h>`**: Standard input/output functions.
- **`<stdlib.h>`**: Memory allocation, process control, conversions.
- **`<string.h>`**: String manipulation functions.
- **`<math.h>`**: Mathematical functions.
- **`<time.h>`**: Time and date functions.

---

This cheat sheet covers the essential aspects of C programming. Use it as a quick reference to help you write and understand C code more effectively.
