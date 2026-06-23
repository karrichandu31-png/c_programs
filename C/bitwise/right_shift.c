#include <stdio.h>

int main() {
    int num, shift;

    printf("Enter number and shift count: ");
    scanf("%d %d", &num, &shift);

    printf("Result = %d\n", num >> shift);

    return 0;
}
