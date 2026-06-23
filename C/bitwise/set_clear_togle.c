#include <stdio.h>

int main() {
    int num, pos;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter bit position: ");
    scanf("%d", &pos);

    printf("Set Bit    : %d\n", num | (1 << pos));
    printf("Clear Bit  : %d\n", num & ~(1 << pos));
    printf("Toggle Bit : %d\n", num ^ (1 << pos));

    return 0;
}
