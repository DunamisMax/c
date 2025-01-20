# C Programming Language Guide

## Basic Program Structure

Every C program follows this basic structure:

```c
/* Include necessary header files */
#include <stdio.h>  // For input/output functions
#include <stdlib.h> // For memory allocation, process control

/* Main function - program execution starts here */
int main(void) {
    // Your code goes here
    printf("Hello, World!\n");
    return 0;  // Return 0 indicates successful execution
}
```

## Data Types and Variables

C provides several fundamental data types:

```c
/* Integer types */
int number = 42;           // Usually 4 bytes (-2,147,483,648 to 2,147,483,647)
short smallNumber = 123;   // Usually 2 bytes (-32,768 to 32,767)
long bigNumber = 123456L;  // At least 4 bytes
unsigned int positive = 100u; // Only positive numbers

/* Floating point types */
float decimal = 3.14f;     // Single precision
double precise = 3.14159;  // Double precision

/* Character type */
char letter = 'A';         // Single character or small integer

/* Boolean type (C99 and later) */
#include <stdbool.h>
bool isTrue = true;        // true or false

/* Constants */
const int FIXED = 100;     // Value cannot be changed
#define MAX_SIZE 1000      // Preprocessor constant
```

## Control Structures

### Conditional Statements

```c
/* If-else statement */
if (x > 0) {
    printf("Positive\n");
} else if (x < 0) {
    printf("Negative\n");
} else {
    printf("Zero\n");
}

/* Switch statement */
switch (grade) {
    case 'A':
        printf("Excellent!\n");
        break;
    case 'B':
        printf("Good!\n");
        break;
    default:
        printf("Unknown grade\n");
}
```

### Loops

```c
/* For loop */
for (int i = 0; i < 10; i++) {
    printf("%d ", i);
}

/* While loop */
int count = 0;
while (count < 5) {
    printf("%d ", count);
    count++;
}

/* Do-while loop */
do {
    printf("At least once\n");
} while (false);

/* Break and continue */
for (int i = 0; i < 10; i++) {
    if (i == 5) continue;  // Skip iteration
    if (i == 8) break;     // Exit loop
    printf("%d ", i);
}
```

## Functions

```c
/* Function declaration (prototype) */
int add(int a, int b);  // Declare before using

/* Function definition */
int add(int a, int b) {
    return a + b;
}

/* Function with pointer parameters */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* Variable arguments */
#include <stdarg.h>
int sum(int count, ...) {
    va_list args;
    va_start(args, count);

    int total = 0;
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }

    va_end(args);
    return total;
}
```

## Arrays and Strings

```c
/* Array declaration and initialization */
int numbers[5] = {1, 2, 3, 4, 5};
int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

/* String (character array) */
char greeting[] = "Hello";  // Null-terminated string
char name[20];             // Fixed-size array for string

/* String functions */
#include <string.h>
strlen(greeting);          // String length
strcpy(name, greeting);    // String copy
strcat(name, " World");    // String concatenation
strcmp(str1, str2);        // String comparison
```

## Pointers and Memory Management

```c
/* Pointer declaration and usage */
int x = 10;
int *ptr = &x;            // ptr holds address of x
printf("%d", *ptr);       // Dereferencing - prints 10

/* Dynamic memory allocation */
int *array = (int *)malloc(5 * sizeof(int));  // Allocate memory
if (array != NULL) {
    // Use memory
    array[0] = 1;

    // Always free when done
    free(array);
    array = NULL;  // Good practice
}

/* Array of pointers */
char *words[] = {"Hello", "World"};

/* Function pointers */
int (*operation)(int, int);  // Function pointer declaration
operation = add;             // Assign function address
int result = operation(5, 3); // Call through pointer
```

## Structures and Unions

```c
/* Structure definition */
struct Person {
    char name[50];
    int age;
    float height;
};

/* Structure usage */
struct Person person1 = {"John", 25, 1.75};
struct Person *ptr = &person1;
printf("%s", ptr->name);  // Arrow operator for pointer

/* Union (shared memory) */
union Data {
    int i;
    float f;
    char str[20];
};
```

## File Operations

```c
/* File handling */
FILE *file = fopen("data.txt", "r");  // Open for reading
if (file != NULL) {
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);
    }
    fclose(file);
}

/* Binary file operations */
FILE *binFile = fopen("data.bin", "wb");  // Open for binary writing
if (binFile != NULL) {
    int numbers[] = {1, 2, 3, 4, 5};
    fwrite(numbers, sizeof(int), 5, binFile);
    fclose(binFile);
}
```

## Error Handling

```c
/* Error handling with errno */
#include <errno.h>
#include <string.h>

FILE *file = fopen("nonexistent.txt", "r");
if (file == NULL) {
    printf("Error: %s\n", strerror(errno));
}

/* Assert for debugging */
#include <assert.h>
assert(ptr != NULL);  // Terminates if condition is false
```