#include<stdio.h>

void sum(int *a, int *b, int *result)
{
    *result = *a + *b;
}

int main()
{
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    sum(&a, &b, &result);

    printf("Sum = %d\n", result);

    return 0;
}
