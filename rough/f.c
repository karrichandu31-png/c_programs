#include<stdio.h>
int sum(int *x,int *y)
{
	*x=*x+*y;
}
int main()
{
	int a=10,b=20;
	int r;
	r=sum(&a,&b);
	printf("%d",a);
}
