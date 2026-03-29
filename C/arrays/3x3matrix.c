#include<stdio.h>
int main()
{
	int mat[3][3],i,j;
	printf("enter elements for 3x3 matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&mat[i][j]);
	}
        printf("the matrix is:\n");
       	for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                        printf("%d ",mat[i][j]);
		printf("\n");
        }

}
