#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	int max = (a>b)?a:b;
	printf("the max number is :%d\n",max);
}
