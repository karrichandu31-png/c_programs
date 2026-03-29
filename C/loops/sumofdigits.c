#include<stdio.h>
int main()
{
	int n,rem,res=0;
	printf("enter number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		res+=rem;
		n/=10;
	}
	printf("sum of digits :%d",res);
}
