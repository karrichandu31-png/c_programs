#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],ch;
	printf("enter string:");
	scanf("%s",str);
	printf("enter character to find position:");
	scanf(" %c", &ch);
	char *p;
	p=strchr(str,ch);
	if(p!=NULL)
	{
		printf("character %c found at position:%ld\n",ch,(long int)(p-str+1));
		printf("string starting from %c is:%s\n",ch,p);
	}
	else{
		printf("character %c not found",ch);
	}
}
