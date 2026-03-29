#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50];
	printf("enter string1:");
	scanf("%s",str1);
	printf("enter string2:");
	scanf("%s",str2);
	if(strcmp(str1,str2)==0)
		printf("two strings are equall");
	else
		printf("two strings are not equall");
}
