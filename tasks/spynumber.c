#include<stdio.h>
int main()
{
	int n;
	printf("enter number:");
	scanf("%d",&n);
	int rem=0,sum=0,pro=1;
	while(n!=0)
	{
		rem=n%10;
		sum+=rem;
		pro*=rem;
		n/=10;
	}
        printf("sum:%d ,product:%d\n",sum,pro);

	if(sum==pro) printf("spy number");
	else printf("not a spy");
}

