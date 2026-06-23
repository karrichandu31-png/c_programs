#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr, n1, n2, i;
    printf("Enter initial size: ");
    scanf("%d", &n1);
    arr = (int*)malloc(n1 * sizeof(int));

    printf("Enter %d elements: ", n1);
    for(i=0; i<n1; i++) scanf("%d", &arr[i]);

    printf("Enter new size: ");
    scanf("%d", &n2);
    arr = (int*)realloc(arr, n2 * sizeof(int)); // resize

    if(n2 > n1) {
        printf("Enter %d more elements: ", n2-n1);
        for(i=n1; i<n2; i++) scanf("%d", &arr[i]);
    }

    printf("Final array: ");
    for(i=0; i<n2; i++) printf("%d ", arr[i]);

    free(arr);
    return 0;
}
