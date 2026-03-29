#include<stdio.h>
int main()
{
	int a;
	printf("enter number : ");
	scanf("%d",&a);
	a+=5; //a=a+5;
	printf("after a+=5:%d\n",a);
	a-=3;
	printf("after a-=2:%d\n",a);
	a*=2;
	printf("after a*=2:%d\n",a);
	a/=4;
	printf("after a/=4:%d\n",a);
	a%=2;
	printf("after a%%=2:%d\n",a);
}
