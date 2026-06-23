#include<stdio.h>

int length(char str[])
{
    int i=0;

    while(str[i]!='\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char str[100];

    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);

    printf("Length = %d", length(str)-1);

    return 0;
}
