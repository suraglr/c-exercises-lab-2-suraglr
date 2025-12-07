#include <stdio.h>

int main() {
    int number;
    int count = 0;
    int sum = 0;
    float average;

    printf("Enter the numbers (enter -1 if you want to stop): ");

    while (1) {
        scanf("%d", &number);

        if (number == -1) {
            break; 
        }

        sum += number;
        count++;      
    }

    if (count > 0) {
        average = sum / (float)count;
    } else {
        average = 0;
    }

    printf("Count: %d\n", count);
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}

