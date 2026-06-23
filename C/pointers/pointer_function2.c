#include<stdio.h>
void (*fun)(int*, int*);
void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
void inc(int *a,int *b)
{
    *a=++(*a);
    *b=++(*b);
}
int main()
{
    int a=10,b=20;
    printf("%d %d\n",a,b);
    void (*fun)(int*, int*);
    fun = swap;
    fun(&a, &b);
    printf("%d %d\n",a,b);
    fun = inc;
    fun(&a, &b);
    printf("%d %d",a,b);
}
