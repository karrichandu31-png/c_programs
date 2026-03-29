#include<stdio.h>
int main()
{
        int a;
        printf("enter number :");
        scanf("%d",&a);
        int b=a;
        printf("pre decrement of %d is %d\n",a,--a);
        printf("post decrement of %d is %d",b--,b);
}

