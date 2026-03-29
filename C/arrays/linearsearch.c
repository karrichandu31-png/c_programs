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
	printf("enter element to search:");
	scanf("%d",&key);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			printf("element found at %d index",i);
			found=1;
			break;
		}
	}
	if(!found) printf("not found");
}
