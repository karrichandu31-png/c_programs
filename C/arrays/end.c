#include<stdio.h>
int main()
{
	int arr[10]={10,20,30,40,50};
	int new=60;
	int size=5;
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	int *ptr=&size;
	arr[*ptr]= new;
	(*ptr)++;
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
