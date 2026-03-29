#include<stdio.h>
int main()
{
	char str[100];
	printf("enter a string:");
	fgets(str,sizeof(str),stdin);
	printf(" you entered:");
	puts(str);
}
