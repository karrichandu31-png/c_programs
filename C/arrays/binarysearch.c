#include<stdio.h>
int main()
{
	int n,arr[100],key,found=0;
	printf("enter size:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter element to found:");
	scanf("%d",&key);
	int low=0,high=n-1;
	int mid=(low+high)/2;
	while(!found)
	{
		if(arr[mid]==key)
		{
			printf("found at index %d",mid);
			found=1;
		}
		if(arr[mid]<key) mid++;
		else mid--;
	}
}
