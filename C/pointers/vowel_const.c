#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    char *p;
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    p = str;
    while(*p != '\0') {
        char ch = tolower(*p);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            vowels++;
        else if(isalpha(ch))
            consonants++;
        p++;
    }

    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    return 0;
}

