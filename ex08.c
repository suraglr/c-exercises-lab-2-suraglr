#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;
    float average;

  
    for (int i = 0; i < 10; i++) {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("Numbers: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\nSum is : %d", sum);

    average = sum / 10;
    printf("\nAverage is : %.2f\n", average);

    return 0;
}
