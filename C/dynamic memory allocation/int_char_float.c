#include <stdio.h>
#include <stdlib.h>
int main() {
    int *p1 = (int*)malloc(sizeof(int));
    char *p2 = (char*)malloc(sizeof(char));
    float *p3 = (float*)malloc(sizeof(float));

    *p1 = 23; *p2 = 'R'; *p3 = 23.5;
    printf("Int: %d, Char: %c, Float: %.1f", *p1, *p2, *p3);

    free(p1); free(p2); free(p3);
    return 0;
}
