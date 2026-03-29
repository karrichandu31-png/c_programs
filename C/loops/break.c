#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<=10;i++)
	{
		if(i==5)
		{
			printf("break encountered at %d.stopping loop",i);
			break;
		}printf("%d ",i);
	}
}
