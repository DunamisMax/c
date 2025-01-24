# even or odd

```c
#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is even or odd
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
```

## Explanation

1. **Input**: The program prompts the user to enter an integer.
2. **Logic**: It uses the modulus operator `%` to check if the number is divisible by 2.
   - If the remainder is `0`, the number is even.
   - Otherwise, the number is odd.
3. **Output**: The program prints whether the number is even or odd.

### Example Output

```bash
Enter an integer: 7
7 is odd.
```
