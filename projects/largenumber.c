#include<stdio.h>
int main()
{
	int n;
	printf("enter number:");
	scanf("%d",&n);
	int rem=0,max=0;
	while(n!=0)
	{
		rem=n%10;
		if(rem>max) max=rem;
		n/=10;
	}
	printf("max no:%d",max);
}
