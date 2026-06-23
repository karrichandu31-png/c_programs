#include <stdio.h>

int main() {
    float a, b, sum, avg;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    sum = a + b;
    avg = sum / 2;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
