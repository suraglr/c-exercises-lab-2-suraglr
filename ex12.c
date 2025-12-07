#include <stdio.h>

int main() {
    int n;
    int factorial = 1;

    do {
        printf("Enter a number less than 50: ");
        scanf("%d", &n);

        if (n < 0 || n >= 50)
            printf("Invalid input. Try again.\n");

    } while (n < 0 || n >= 50);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %d\n", n, factorial);

    return 0;
}
