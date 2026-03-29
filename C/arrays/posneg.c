#include<stdio.h>
int main()
{
	int arr[5]={1,0,3,-1,5};
	int p=0,n=0,z=0;
	for(int i=0;i<5;i++)
	{
		if(arr[i]>0) p++;
		else if (arr[i]<0) n++;
		else z++;
	}
	printf("positive = %d\n negative = %d\n zero = %d",p,n,z);
}

