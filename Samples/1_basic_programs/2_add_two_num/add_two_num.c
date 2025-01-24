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