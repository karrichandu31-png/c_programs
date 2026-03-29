#include<stdio.h>
int main()
{
	int a;
	printf("enter number:");
	scanf("%d",&a);

	if(a%2==0)
	{
		if(a%3==0)
		{
			if(a%5==0)
				printf("number divisible by 2,3 and 5");
			else
				printf("number divisible by 2 and 3 only not 5");
		}
		else
			printf("number divisible by 2 only");
	}
	else
		printf("number not divisible by 2 also");
}
