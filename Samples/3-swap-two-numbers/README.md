# swap two numbers

```c
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
```

## Explanation

1. **Input**: The program first takes two integer inputs `a` and `b` from the user.
2. **Swapping**: It then uses a temporary variable `temp` to hold the value of `a`, assigns the value of `b` to `a`, and finally assigns the value of `temp` (which was the original value of `a`) to `b`.
3. **Output**: The program prints the values of `a` and `b` after swapping.

### Example Run

```bash
Enter the value of a: 5
Enter the value of b: 10
After swapping:
a = 10
b = 5
```