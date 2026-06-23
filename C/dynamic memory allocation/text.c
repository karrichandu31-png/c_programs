#include <stdio.h>
#include <stdlib.h>
int main() {
    char *str;
    int n;
    printf("Enter size of string: ");
    scanf("%d", &n);

    str = (char*)malloc((n+1) * sizeof(char)); // +1 for '\0'
    if(str == NULL) {
        printf("Memory not allocated");
        return 0;
    }

    printf("Enter text: ");
    scanf(" %[^\n]s", str); // reads with spaces
    printf("You entered: %s", str);

    free(str);
    return 0;
}
