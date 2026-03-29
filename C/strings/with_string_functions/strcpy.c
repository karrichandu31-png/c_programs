#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50];
	printf("enter string:");
	scanf("%s",str1);
	strcpy(str2,str1);
	printf("string copyied to string 2 :%s",str2);
}
