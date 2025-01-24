# add two numbers

```c
#include <stdio.h>

int main() {
    // Declare variables to store the two numbers
    double num1, num2;

    // Prompt the user for input
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Calculate the sum
    double sum = num1 + num2;

    // Print the result
    printf("The sum of %.2lf and %.2lf is: %.2lf\n", num1, num2, sum);

    return 0;
}
```

## Explanation

1. **Input**: The program prompts the user to input two numbers, `num1` and `num2`. These numbers are read as `double` values to allow for decimal inputs.
2. **Calculation**: The program calculates the sum of the two numbers by adding `num1` and `num2` and storing the result in the variable `sum`.
3. **Output**: The program then prints the sum of the two numbers, formatted to two decimal places.

### Example Run

```bash
Enter the first number: 3.5
Enter the second number: 2.7
The sum of 3.50 and 2.70 is: 6.20
```
