#include<stdio.h>
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	printf("right shift by 2(10/2^2):%d\n",num>>2);
	printf("left shift by 2(10*2^2):%d",num<<2);
}
