#include<stdio.h>
int main()
{
	int n1,n2,a,b,gcd,lcm;
	printf("enter two numbers:");
	scanf("%d%d",&n1,&n2);
	a=n1;
	b=n2;
	while(a!=b)
	{
		if(a>b) a=a-b;
		else b=b-a;
	}
	gcd=a;
	lcm=(n1*n2)/gcd;
	printf("gcd : %d lcm : %d",gcd,lcm);
}
