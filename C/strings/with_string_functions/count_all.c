#include<stdio.h>
#include<ctype.h>

int main()
{
    char str[] = "C Programmer@123";

    int upper=0, lower=0, digit=0, special=0;
    int i=0;

    while(str[i]!='\0')
    {
        if(isupper(str[i]))
            upper++;

        else if(islower(str[i]))
            lower++;

        else if(isdigit(str[i]))
            digit++;

        else
            special++;

        i++;
    }

    printf("Uppercase = %d\n", upper);
    printf("Lowercase = %d\n", lower);
    printf("Digits = %d\n", digit);
    printf("Special = %d\n", special);

    return 0;
}
