#include <stdio.h>
int main() {
    char *names[] = {"R23", "JNTU", "C-Programming"};
    int i;
    for(i=0; i<3; i++)
        printf("%s\n", names[i]);
    return 0;
}
