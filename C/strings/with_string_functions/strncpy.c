#include<stdio.h>
#include<string.h>
int main()
{
	char scr[]="programmer";
	char dest[10];
	int n=5;
	strncpy(dest,scr,n);
	dest[n]='\0';
	printf("source string:%s\n",scr);
	printf("copied string (first %d characters):%s\n",n,dest);
}
