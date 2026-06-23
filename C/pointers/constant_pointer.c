// syntax : int *const p   
// pointer adress is constant we cannot increment or drcremnt the adress of that constant pointer

#include<stdio.h>
int main()
{
	int a=10;
	int *const p=&a;
	printf("value: %d\n",*p);
	printf("address: %p",p);
	//++p;
	//printf("address: %p",p);
}
