#include<stdio.h>
int main()
{
	int num;
	do
	{
		printf("enter a number(0 to stop):");
		scanf("%d",&num);
		printf("you entered :%d\n",num);
	}while(num!=0);
	printf("program terminated");
}
