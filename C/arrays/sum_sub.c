#include <stdio.h>
int main() {
    int a[10][10], b[10][10], sum[10][10], sub[10][10], r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of 1st matrix:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of 2nd matrix:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &b[i][j]);

    for(i=0; i<r; i++)
        for(j=0; j<c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            sub[i][j] = a[i][j] - b[i][j];
        }

    printf("Sum Matrix:\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) printf("%d ", sum[i][j]);
        printf("\n");
    }

    printf("Subtraction Matrix:\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) printf("%d ", sub[i][j]);
        printf("\n");
    }
    return 0;
}
