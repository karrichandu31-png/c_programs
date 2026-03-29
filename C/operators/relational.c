#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers for comparision:");
	scanf("%d%d",&a,&b);

       printf("is %d > %d result: %d\n",a,b,a>b);
       printf("is %d < %d result: %d\n",a,b,a<b);
       printf("is %d >= %d result: %d\n",a,b,a>=b);
       printf("is %d <= %d result: %d\n",a,b,a<=b);
       printf("is %d == %d result: %d\n",a,b,a==b);
       printf("is %d !=  %d result: %d\n",a,b,a!=b);

 
}
