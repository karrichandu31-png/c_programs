#include<stdio.h>
int main()
{
	int a=5;
	float b=2.5;
	float res=a+b; //res will be promoted to float
        printf("first number is %d\n",a);
	printf("second number is %.1f\n",b);
	printf("result of a + b ( promted to float) :%.1f",res);

}
