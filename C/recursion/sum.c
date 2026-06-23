#include <stdio.h>

// Function to count digits recursively
int countDigits(int n) {
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}

// Function to sum digits recursively
int sumDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int number = 12345;
    printf("Count of digits: %d\n", countDigits(number));
    printf("Sum of digits: %d\n", sumDigits(number));
    return 0;
}
