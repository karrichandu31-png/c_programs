#include<stdio.h>
int main()
{
	int n,fact=1;
	printf("enter number:");
	scanf("%d",&n);
	int a=n;
	while(n!=0)
	{
		fact*=n;
		n--;
	}
	printf("factorial of %d is %d",a,fact);
}
