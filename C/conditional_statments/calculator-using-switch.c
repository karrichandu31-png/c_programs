#include<stdio.h>
int main()
{
	float a,b;
	char c;
	printf("enter two numbers:");
	scanf("%f%f",&a,&b);
	printf("enter the operation(+,-,*,/):");
	scanf(" %c",&c);

	switch(c)
	{
		case '+':printf("%.2f",a+b); break;
		case '-':printf("%.2f",a-b); break;
		case '*':printf("%.2f",a*b); break;
		case '/':printf("%.2f",a/b); break;
		default :printf("invalid operation");
	}
}
