#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr, n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int*)calloc(n, sizeof(int)); // calloc sets all values to 0

    printf("Default values: ");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}
