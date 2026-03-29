#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="chandu",str2[]="karri";
	printf("string1 is %s\n",str1);
	printf("string2 is %s\n",str2);
	printf("string1 lenght is %ld\n",strlen(str1));
	printf("strinng2 length is %ld\n",strlen(str2));
        char str3[50];
	printf("copy of str1 to str3 is %s\n",strcpy(str3,str1));
        
	if (strcmp(str1,str3)==0)
		printf("str1 and str3 is equal\n");
	else
		printf("str1 and str3 is not equal\n");

	printf("adding sting1 to string2 is %s",strcat(str2,str1));
//	printf("reverse of str1 is %s",strrev(str1));


        }

