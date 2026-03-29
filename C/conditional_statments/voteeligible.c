#include<stdio.h>
int main()
{
	int a;
	printf("enter the age:");
	scanf("%d",&a);
	if(a>=18)
		printf("eligible to vote");
	else
		printf("not eligible to vote");
}
