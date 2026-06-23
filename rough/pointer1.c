#include<stdio.h>
int sum(int a,int b);
int main()
{
	int a=5,b=10,c;
	c=sum(a,b);
	printf("%d",c);
}

int sum(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
