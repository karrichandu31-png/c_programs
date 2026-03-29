#include<stdio.h>
int main()
{
	int a=5;
	char c='d';
	float d=2.4;
	double s=4.55;
	printf("size of int in bytes :%zu\n",sizeof(a));
	printf("size of char in bytes :%zu\n",sizeof(c));
        printf("size of float in bytes :%zu\n",sizeof(d));
        printf("size of double in bytes :%zu\n",sizeof(s));

}
