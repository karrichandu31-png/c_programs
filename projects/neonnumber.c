#include<stdio.h>
int main()
{
	int n,d,sum=0,rem=0;
	printf("enter number :");
	scanf("%d",&n);
	d=n;
	int s=n*n;
	int dup=s;
	while(s!=0)
	{
		rem=s%10;
		sum+=rem;
		s/=10;
	} 
	printf("square of numer :%d sum of number :%d\n",dup,sum);
	if(d==sum) printf("neon number");
	else  printf("not neon number");
}
