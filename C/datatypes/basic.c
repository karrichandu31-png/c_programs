#include<stdio.h>
int main()
{
	int a;
	float b;
	char c;
	double d;
	printf("enter integer value:");
	scanf("%d",&a);
	printf("enter float value:");
	scanf("%f",&b);
	printf("enter any charatcter:");
	scanf(" %c",&c);
	printf("enter double value:");
	scanf("%lf",&d);
	printf("integer is %d\n float values is %.7f\ncharcter is %c\ndouble value is %.15lf",a,b,c,d);
}

