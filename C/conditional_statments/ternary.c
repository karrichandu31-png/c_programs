#include<stdio.h>
int main()
{
	int n;
	printf("enter number :");
	scanf("%d",&n);
	(n>0)?printf("positive number"):(n<0)?printf("negative number"):printf("zero");
}
