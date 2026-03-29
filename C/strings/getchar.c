#include<stdio.h>
int main()
{
	char str[50];
	int i=0;
	char ch;
	printf("enter string:");
	while((ch=getchar())!='\n')
	{
		str[i]=ch;
		i++;
	}
	str[i]='\0';
	printf(" you entered :");
	puts(str);
}
