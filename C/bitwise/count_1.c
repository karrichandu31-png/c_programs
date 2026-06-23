#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    while(num) {
        count += num & 1;
        num >>= 1;
    }

    printf("Number of 1's = %d\n", count);

    return 0;
}
