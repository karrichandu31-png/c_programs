#include<stdio.h>
int main()
{
	int n,even=2;
	printf("enter how many even numbers:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++){
			printf("%d ",even);
			even+=2;
		}printf("\n");

	}
}
