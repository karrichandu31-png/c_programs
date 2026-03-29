#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("addition :%d + %d = %d\n",a,b,a+b);
	printf("subtraction : %d - %d = %d\n",a,b,a-b);
	printf("multiplication :%d * %d = %d\n",a,b,a*b);
	if(b!=0)
	{
		printf("division : %d / %d = %d\n",a,b,a/b);
		printf("modulus : %d %% %d = %d\n",a,b,a%b);
	}
	else
	{
		printf("division and modulus by zero is not allowed");
	}
}
