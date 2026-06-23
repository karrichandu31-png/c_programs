#include<stdio.h>

void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("Inside function:\n");
    printf("a = %d b = %d\n", a, b);
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Before swap:\n");
    printf("a = %d b = %d\n", a, b);

    swap(a, b);

    printf("After function call:\n");
    printf("a = %d b = %d\n", a, b);

    return 0;
}
