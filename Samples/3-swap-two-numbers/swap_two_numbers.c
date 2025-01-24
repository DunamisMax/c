#include <stdio.h>

int main() {
    int a, b, temp;

    // Input the values of a and b
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Swapping logic
    temp = a;
    a = b;
    b = temp;

    // Output the swapped values
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}