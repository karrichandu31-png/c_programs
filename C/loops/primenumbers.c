#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int isprime=0;
	for(int i=2;i<=n;i++)
	{
		isprime=1;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				isprime=0;
				break;
			}
		}
		if(isprime==1)
			printf("%d\n",i);
	}
}
