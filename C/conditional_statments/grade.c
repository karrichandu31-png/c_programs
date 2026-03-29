#include<stdio.h>
int main()
{
	int m;
	printf("enter marks:");
	scanf("%d",&m);

	if(m>=90) printf("Grade : A");
	else if(m>=80) printf("Grade : B");
	else if(m>=70) printf("Grade : C");
	else if(m>=60) printf("Grade : D");
	else if(m>=50) printf("Grade : E");
	else printf("Fail");
}
