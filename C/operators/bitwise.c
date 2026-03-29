#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("bitwise and (a & b):%d\n",a&b); 
	printf("bitwise or (a | b):%d\n",a|b);
	printf("bitwise xor (a ^ b):%d\n",a^b);
	printf("bitwise not (~a):%d",~a);
}
