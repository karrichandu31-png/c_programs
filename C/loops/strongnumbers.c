// strong numbers between 1 to 1000

#include<stdio.h>
int main()
{
	for(int i=1;i<=1000;i++)
	{
		int temp=i,sum=0,fact=1;
		while(temp!=0)
		{
	           int rem=temp%10;
		   int fact=1;
		   for(int j=1;j<=rem;j++)
		   {
			   fact*=j;
		   }
		   sum+=fact;
		   temp/=10;
		}
	        if(i==sum)
                printf("%d ",i);
	}

}
