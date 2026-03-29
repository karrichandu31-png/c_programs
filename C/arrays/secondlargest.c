#include<stdio.h>
int main()
{
	int n,arr[100],max,smax;
	printf("enter size:");
	scanf("%d",&n);
	printf("enter elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			smax=max;
			max=arr[i];
		}
		else if(arr[i]>smax && arr[i]<max)
			smax=arr[i];
	}
	printf("first largest is %d\n",max);
	printf("second largest is %d\n",smax);

}
