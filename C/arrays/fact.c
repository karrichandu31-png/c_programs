#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int n=5;
	long long fact[5];
	printf("array is\n  ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}printf("\n factorial of array is \n");
	for(int i=0;i<n;i++)
	{
		long long fac=1;
		for(int j=1;j<=arr[i];j++)
		{
			fac=fac*j;
		}
		fact[i]=fac;
	}
	for(int i=0;i<n;i++)
	{
		printf("%lld ",fact[i]);
	}
}
