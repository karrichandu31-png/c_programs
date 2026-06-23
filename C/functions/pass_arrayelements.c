#include<stdio.h>

int sum_array(int a[], int n)
{
    int sum=0;
    int i;

    for(i=0; i<n; i++)
    {
        sum = sum + a[i];
    }

    return sum;
}

int main()
{
    int a[100], n, i;

    printf("Enter array size: ");
    scanf("%d",&n);

    printf("Enter array elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Sum = %d", sum_array(a,n));

    return 0;
}
