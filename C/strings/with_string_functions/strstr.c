#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="chandu is gud boy";
	char tar[]="gud";
	char *p;
	p=strstr(str,tar);
	if(p!=NULL)
	{
		printf("substring %s found in string.\n",tar);
		printf("string starting from the first occurence is:%s\n",p);
	}
	else
	{
		printf("substring %s not found.\n",tar);
	}
}

