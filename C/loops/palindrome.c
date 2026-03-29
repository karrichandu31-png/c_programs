#include<stdio.h>
int main()
{
        int n,rem,rev=0;
        printf("enter number:");
        scanf("%d",&n);
	int org=n;
	while(n!=0)
        {
                rem=n%10;
                rev=rev*10+rem;
                n/=10;
        }
	if(org == rev)
		printf("%d is palindrome",org);
	else
		printf("%d is not a palindrome",org);

}

