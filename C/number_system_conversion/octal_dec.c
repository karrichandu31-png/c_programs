#include<stdio.h>

int main()
{
    int oct, dec=0, base=1, rem;

    printf("Enter octal number: ");
    scanf("%d",&oct);

    while(oct>0)
    {
        rem=oct%10;

        dec=dec+(rem*base);

        base=base*8;

        oct=oct/10;
    }

    printf("Decimal = %d",dec);

    return 0;
}
