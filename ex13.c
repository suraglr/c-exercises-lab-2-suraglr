#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
  
    do {
        printf("Enter a number (less than 50): ");
        scanf("%d", &n);

        if (n < 0 || n >= 50)
            printf("Invalid input. Try again.\n");

    } while (n < 0 || n >= 50);

    printf("Factorial of %d is %d\n", n, factorial(n));

    return 0;
}

