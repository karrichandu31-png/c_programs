#include<stdio.h>
int main()
{
	int a;
	printf("enter number (1-3):");
	scanf("%d",&a);

	switch(a)
	{
		case 1:printf("case 1 executed\n");
		case 2:printf("case 2 executed\n");
		case 3:printf("case 3 executed\n");
		default :printf("invalid number");
			
	}
}
