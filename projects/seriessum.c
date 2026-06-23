#include<stdio.h>
int main()
{
	int n,num,sum=0;
	printf("enter how many number:");
	scanf("%d",&n);
	printf("enter series number:");
	scanf("%d",&num);
	int o=num;
	for(int i=1;i<n;i++)
	{
		num+=10;
        	printf("%d ",num);
		sum+=num;
	}
	printf("sum of series is %d",sum+10);

}
