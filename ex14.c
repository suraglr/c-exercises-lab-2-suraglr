#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    do {
        printf("Enter n less than 30: ");
        scanf("%d", &n);

        if (n < 0 || n > 30)
            printf("Invalid input. Try again.\n");

    } while (n < 0 || n > 30);

    printf("Fibonacci series is %d:\n", n);
    for (int i = 0; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\nThe %dth Fibonacci number is %d\n", n, fibonacci(n));

    return 0;
}

