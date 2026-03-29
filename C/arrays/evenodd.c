#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int e=0,o=0;
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2==0) e++;
		else o++;
	}
	printf("even = %d\n odd = %d",e,o);
}
