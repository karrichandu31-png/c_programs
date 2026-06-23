#include<stdio.h>
int main()
{
	int n;
	float y;
	char c;
	double d;
	printf("enter the number :");
	scanf("%d",&n);
	printf(" int number is %d\n",n);
	y=(float)n;
	printf("converted float is %f\n",y);
	c=(char)n;
	printf("converted char is %c\n",c);
	d=(double)n;
	printf("double is %lf\n",d);
}
