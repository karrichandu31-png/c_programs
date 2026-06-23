#include <stdio.h>
int main() {
    int *p1; char *p2; float *p3; double *p4;
    printf("Size of int*: %d\n", sizeof(p1));
    printf("Size of char*: %d\n", sizeof(p2));
    printf("Size of float*: %d\n", sizeof(p3));
    printf("Size of double*: %d\n", sizeof(p4));
    // Note: All pointer sizes are same, usually 8 bytes on 64-bit
    return 0;
}
