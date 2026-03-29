#include<stdio.h>
int main()
{
	int a[10][10],transp[10][10],r,c,i,j;
	printf("enter rows and column:");
	scanf("%d%d",&r,&c);

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	}
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                        transp[j][i]=a[i][j];
        }
        for(i=0;i<c;i++)
        {
                for(j=0;j<r;j++)
                        printf("%d ",transp[i][j]);
		printf("\n");
        }


}
