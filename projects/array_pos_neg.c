#include <stdio.h>

int main() {
    int arr[] = {1, 2, -1, -2, 3, 4, -3, -4, 5, 6};
    int pos[10], neg[10]; 
    int pCount = 0, nCount = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            pos[pCount] = arr[i];
            pCount++;
        } 
        else if (arr[i] < 0) {
            neg[nCount] = arr[i];
            nCount++;
        }
    }

       // Printing Positive Array
    printf("array numbers: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    // Printing Positive Array
    printf("\nPositive numbers: ");
    for (int i = 0; i < pCount; i++) {
        printf("%d ", pos[i]);
    }

    // Printing Negative Array
    printf("\nNegative numbers: ");
    for (int i = 0; i < nCount; i++) {
        printf("%d ", neg[i]);
    }

    printf("\n");
    return 0;
}
