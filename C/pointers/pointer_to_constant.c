// syntax : int const *P OR const int *p
// pointer constant means the value inside the pointer adrress is constant we cannnot chgange it 

#include<stdio.h>
int main()
{
	int a=10;
        int const *p;
	p=&a;
	printf("%d\n",*p);
	printf("%p\n",p);
//	(*p)++;  //increasing values inside the adress
//	printf("%d",*p);
}
