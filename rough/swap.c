#include<stdio.h>
int swap(int *x,int *y)
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;

}
int main()
{
	int a=10,b=20;
	printf("%d %d\n",a,b);
	swap(&a,&b);
	printf("%d %d",a,b);
}
