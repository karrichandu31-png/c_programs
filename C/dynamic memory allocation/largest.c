#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr, n, i, max;
    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));
    printf("Enter elements: ");
    for(i=0; i<n; i++) scanf("%d", &arr[i]);

    max = arr[0];
    for(i=1; i<n; i++)
        if(arr[i] > max) max = arr[i];

    printf("Largest = %d", max);
    free(arr);
    return 0;
}
