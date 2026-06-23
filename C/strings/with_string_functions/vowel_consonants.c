#include<stdio.h>
#include<ctype.h>

int main()
{
    char str[] = "C Programmer";

    int vowel = 0, consonant = 0;
    int i = 0;

    while(str[i] != '\0')
    {
        char ch = tolower(str[i]);

        if(isalpha(ch))
        {
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowel++;
            else
                consonant++;
        }

        i++;
    }

    printf("Vowels = %d\n", vowel);
    printf("Consonants = %d\n", consonant);

    return 0;
}
