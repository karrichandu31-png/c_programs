#include<stdio.h>

int main()
{
	int n,rem=0,sum;
	printf("enter number:");
	scanf("%d",&n);
	while(n>9)
	{
		sum=0;
		while(n!=0)
		{
			rem=n%10;
			sum=sum+rem;
			n/=10;
		}
		n=sum;
	}
	printf("sum of single is %d",sum);
}
