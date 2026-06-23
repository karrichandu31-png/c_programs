#include<stdio.h>

void sum(int a, int b)
{
    int result;

    result = a + b;

    printf("Sum = %d\n", result);
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    sum(a, b);

    return 0;
}
