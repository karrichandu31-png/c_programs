#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5};
	int size=5;
	int ele=9;
	int pos=2;
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	for (int i=size;i>pos;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos]=ele;
	size++;
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}

}
