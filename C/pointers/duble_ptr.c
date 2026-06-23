#include <stdio.h>

int main() {
    int a = 42;
    int *p = &a;
    int **pp = &p;

    printf("Value of a: %d\n", a);
    printf("Value using *p: %d\n", *p);
    printf("Value using **pp: %d\n", **pp);

    return 0;
}

