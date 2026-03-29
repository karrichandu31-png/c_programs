#include<stdio.h>
int main()
{
	int arr[5];  // array initilaization
        for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);  // printing in straight order
	}
	printf("\n");
	for(int i=4;i>=0;i--)
	{
		printf("%d ",arr[i]);  // reverse order
	}

}
