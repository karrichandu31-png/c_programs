#include<stdio.h>

int main()
{
    int num, oct[32], i=0;

    printf("Enter decimal number: ");
    scanf("%d",&num);

    while(num>0)
    {
        oct[i]=num%8;
        num=num/8;
        i++;
    }

    printf("Octal = ");

    for(i=i-1;i>=0;i--)
    {
        printf("%d",oct[i]);
    }

    return 0;
}
