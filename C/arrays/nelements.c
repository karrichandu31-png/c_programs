#include<stdio.h>
int main()
{
	int n,arr[100];
	printf("enter no. of array elements:");
	scanf("%d",&n);
	printf("enter %d elements :\n",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

