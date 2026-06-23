#include<stdio.h>

int main()
{
    int num, rem, i=0;
    char hex[20];

    printf("Enter decimal number: ");
    scanf("%d",&num);

    while(num>0)
    {
        rem=num%16;

        if(rem<10)
            hex[i]=rem+'0';
        else
            hex[i]=rem-10+'A';

        num=num/16;
        i++;
    }

    printf("Hexadecimal = ");

    for(i=i-1;i>=0;i--)
    {
        printf("%c",hex[i]);
    }

    return 0;
}
