#include<stdio.h>
int main()
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	if(a&1)
		printf("%d is odd number",a);
	else
		printf("%d is even number",a);
}
