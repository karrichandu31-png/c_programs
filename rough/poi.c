#include<stdio.h>
int main()
{
	int *p=0;
	char *q=0;
	float *s=0;
	double *t=0;
	void *u=0;

	printf("%d\n",sizeof(p));
	printf("%d\n",sizeof(q));
	printf("%d\n",sizeof(s));
	printf("%d\n",sizeof(t));
	printf("%d\n",sizeof(u));
}
