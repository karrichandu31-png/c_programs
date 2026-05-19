// guesing random numbers game


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int attempts=0,guess,target;

	printf("-----------------------------------------\n");
	printf("Guessing random numbers game\n");
	printf("-----------------------------------------\n");
	printf("guess any number between 1 to 10\n");

	srand(time(NULL));

	target=rand()%10+1;

	while(attempts<3)
	{
		printf("Enter your guess: ");
		scanf("%d",&guess);
		attempts++;

		if(guess==target)
		{
			printf("Congratulations! your guess is correct.\n");

        	}
		else if(guess<target)
		{
			printf("your guess is too low.\n");

		}
		else
		{
			printf("your guess is too high.\n");
	
		}
	}
	printf("sorry,you've used all the attempts.\nthe random number is %d",target);
}
