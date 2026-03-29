#include<stdio.h>
int main()
{
	int a[10],b[10],n1,n2,j,i;
	printf("enter sizes:");
	scanf("%d%d",&n1,&n2);
	printf("enter array1:");
	for(i=0;i<n1;i++) scanf("%d",&a[i]);
	printf("enter array2:");
	for(i=0;i<n2;i++) scanf("%d",&b[i]);

	printf("union :");
	for(i=0;i<n1;i++) printf("%d ",a[i]);
	for(i=0;i<n2;i++)
	{
		for(j=0;j<n1;j++) if(b[i]==a[j]) break;
		if(j==n1) printf("%d ",b[i]);
	}
	printf("intersection: ");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(a[i]==b[j]) 
			{
				printf("%d ",a[i]);
				break;
			}
		}
	}
}
