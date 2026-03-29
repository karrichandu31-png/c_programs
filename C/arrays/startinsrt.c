#include<stdio.h>

int insert(int arr[],int *ptr,int new)
{
	for(int i=*ptr;i>0;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]=new;
	*ptr++;
}

int main()

{
	int arr[10] = {10,20,30,40,50};
	int size = 5;
	int new=60;
	printf("before\n");
        for(int i=0;i<size;i++)
        {
                printf("%d ",arr[i]);
        }

	insert(arr,&size,new);
	printf("\nafter\n");
	for(int i=0;i<=size;i++)
	{
		printf("%d ",arr[i]);
	}


}
