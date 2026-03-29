#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("enter string:");
	fgets(str,sizeof(str),stdin);
	
	printf("you entered :");
        fputs(str,stdout);
	printf("string length is %ld",strlen(str)-1);
}
