#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int size=5;
	printf("before\n");
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nafter\n");
	for(int i=size-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
        
}
