#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("enter the sides of a triangle:");
        scanf("%d%d%d",&s1,&s2,&s3);

	if(s1==s2 && s2==s3) printf("equilateral triangle");
	else if(s1==s2 || s2==s3) printf("isosceles triangle");
	else printf("scalene triangle");
}
