#include <stdio.h>

int main() {
    int num, bits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0) {
        bits++;
        num >>= 1;
    }

    printf("Minimum bits required = %d\n", bits);

    return 0;
}
