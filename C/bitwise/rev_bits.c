#include <stdio.h>

int main() {
    unsigned int num, rev = 0;

    printf("Enter number: ");
    scanf("%u", &num);

    for(int i = 0; i < 32; i++) {
        rev <<= 1;
        rev |= (num & 1);
        num >>= 1;
    }

    printf("Reversed bits value = %u\n", rev);

    return 0;
}
