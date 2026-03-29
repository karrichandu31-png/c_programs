#include<stdio.h>
#include<string.h>
/*
int main()
{
	char str1[50],str2[50];
	printf("enter string1:");
	fgets(str1,sizeof(str1),stdin); // store it as characters like [ 'c','h','a','n','d','u','\n']
	str1[strcspn(str1,"\n")]='\0'; // remove last \n change it to \0
	printf("enter string2:");
	fgets(str2,sizeof(str2),stdin);
	str2[strcspn(str2,"\n")]='\0';
        printf("after concatination of two strings:%s ",strcat(str1,str2));
}
*/


int main()
{
        char str1[50],str2[50];
        printf("enter string1:");
        scanf("%s",str1);
        printf("enter string2:");
        scanf("%s",str2);  // \n becomes \0 automatically
        strcat(str1," ");

        printf("after concatination of two strings:%s ",strcat(str1,str2));
}

