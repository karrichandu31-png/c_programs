#include<stdio.h>
int main()
{
	int n,org,rem,res=0;
	printf("enter three digit number:");
	scanf("%d",&n);
	org=n;
	while(n!=0)
	{
		rem=n%10;
		res+=rem*rem*rem;
		n/=10;
	}
	if(org==res)
		printf("%d is armstrong number",org);
	else
		printf("%d is not a armstrong number",org);
}
