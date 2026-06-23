#include <stdio.h>

int main() {
    char str[100];
    int len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[len] != '\0') {
        len++;
    }

    printf("Length = %d\n", len - 1); // excluding '\n'

    return 0;
}
