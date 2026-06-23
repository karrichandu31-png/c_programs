#include<stdio.h>

void sum_avg(int a, int b)
{
    int sum;
    float avg;

    sum = a + b;
    avg = sum / 2.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    sum_avg(a, b);

    return 0;
}
