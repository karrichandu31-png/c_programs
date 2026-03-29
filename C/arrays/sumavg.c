#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int sum=0,avg=0;
	int size=5;
	for(int i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	printf("sum = %d\n",sum);
	printf("avg = %d",sum/size);

}
