#include <stdio.h>

int main() {
    unsigned short num, result;

    printf("Enter hexadecimal number: ");
    scanf("%hx", &num);

    result = ((num & 0x00FF) << 8) |
             ((num & 0xFF00) >> 8);

    printf("After swapping bytes = 0x%X\n", result);

    return 0;
}
