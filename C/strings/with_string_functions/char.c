#include<stdio.h>

int main()
{
    char str[]="C Programmer";

    int i=0;

    while(str[i]!='\0')
    {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
