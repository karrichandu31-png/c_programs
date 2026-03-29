#include<stdio.h>
int main()
{
	int n=10;
	char c='c';
	float f=1.2344555;
	double d=2.334444444444;
	printf("integer size is %zu\n",sizeof(n));
	printf("char size is %zu\n",sizeof(c));
        printf("float size is %zu\n",sizeof(f));
        printf("double size is %zu\n",sizeof(d));

}
