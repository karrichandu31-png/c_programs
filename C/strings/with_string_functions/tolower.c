#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main()
{
    char str[] = "C PROGRAMMER";

    printf("Original: %s\n", str);

    int i = 0;

    while(str[i] != '\0')
    {
        str[i] = tolower(str[i]);
        i++;
    }

    printf("LOWER: %s", str);

    return 0;
}
