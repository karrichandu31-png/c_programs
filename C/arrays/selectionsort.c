#include<stdio.h>
int main()
{
	int n,min,arr[100],temp;
	printf("entyer size:");
	scanf("%d",&n);
	printf("enter elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min]) min=j;
		}
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
	printf("after sorting:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
