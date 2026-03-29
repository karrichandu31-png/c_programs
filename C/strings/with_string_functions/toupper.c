#include<stdio.h>
#include<ctype.h>
int main()
{
	char str[]="c programmer";
	printf("%s",str);
	int i=0;
	while(str[i]!='\0')
	{
		str[i]=toupper(str[i]);
	}
	printf("UPPER:%s",str);
}
