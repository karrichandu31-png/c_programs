#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {

        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z')) {

            char ch = str[i];

            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
               ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                vowels++;
            else
                consonants++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
            digits++;
        else if(str[i] == ' ')
            spaces++;
    }

    printf("Vowels     = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits     = %d\n", digits);
    printf("Spaces     = %d\n", spaces);

    return 0;
}
