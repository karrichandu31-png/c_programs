#include <stdio.h>

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary = ");

    for(int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }

    return 0;
}
