#include<stdio.h>
int main()
{
	int *p,a=10;
	p=&a;
	int *q;
	*q=5;
	*p=*q;
	printf("%d\n",*q);
	printf("%d",*p);
}
