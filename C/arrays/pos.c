#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5};
	int pos=2,size=5,e=5;
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nafter middle inserted\n");
	for(int i=size;i>pos;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos]=e;
	size++;
	for(int i=0;i<size;i++)
        {
                printf("%d ",arr[i]);
        } 
	printf("\n after starting insert \n ");
	for(int i=size;i>0;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]=9;
	size++;
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}



}
