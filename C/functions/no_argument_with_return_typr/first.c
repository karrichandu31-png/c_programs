#include<stdio.h>

int sum()
{
    int a = 10, b = 20;

    return a+b;
}

int main()
{
    int result;

    result = sum();

    printf("Sum = %d", result);

    return 0;
}
