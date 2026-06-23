#include<stdio.h>

int main()
{
    char hex[20];
    int dec=0, value, i=0;

    printf("Enter hexadecimal number: ");
    scanf("%s",hex);

    while(hex[i]!='\0')
    {
        if(hex[i]>='0' && hex[i]<='9')
            value=hex[i]-'0';

        else if(hex[i]>='A' && hex[i]<='F')
            value=hex[i]-'A'+10;

        else
            value=hex[i]-'a'+10;


        dec=dec*16+value;

        i++;
    }

    printf("Decimal = %d",dec);

    return 0;
}
