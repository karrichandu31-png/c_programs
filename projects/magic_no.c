#include<stdio.h>
int main()
{
	int n;
	printf("enter number :");
	scanf("%d",&n);
	if(n%9==1)
		printf("magic number");
	else
		printf("not a magic number");
}

