#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],mul[10][10],r1,r2,c1,c2,i,j,k;
	printf("enter rows and columns for matrix 1:");
	scanf("%d%d",&r1,&c1);
	printf("enter rows and columns for matrix 2:");
	scanf("%d%d",&r2,&c2);

	if(c1!=r2)
		printf("multiplication is not possible");
	printf("enter elements for matrix1:\n");
	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
			scanf("%d",&a[i][j]);
	printf("enter elements for matrix 2:\n");
	for(i=0;i<r2;i++)
                for(j=0;j<c2;j++)
                        scanf("%d",&b[i][j]);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			mul[i][j]=0;
			for(k=0;k<c1;k++)
				mul[i][j]+=a[i][k]*b[k][j];
		}
	}
	printf("result matrix:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++){
			printf("%d ",mul[i][j]);
		}
	
            printf("\n");
	}
}
