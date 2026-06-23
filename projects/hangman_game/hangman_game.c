#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


#define max_words 100
#define max_length 50


int main()
{
	FILE *fp;
	char words[max_words][max_length];
	int count = 0;

	//file open
	fp = fopen("words.txt","r");

	if(fp == NULL)
	{
		printf("file is empty");
	}

	// reading entire file
	while(fscanf(fp,"%s",words[count])!= EOF){
		count++;
	}

	// closing file
	fclose(fp);

	// random select
	srand(time(NULL));
	int randomindex=rand()%count;

	char word[max_length];
	strcpy(word,words[randomindex]); // copy words form file to word
	
	int length= strlen(word);  // find strlen
	
	char guess[max_length];
	for(int i=0;i<length;i++)
	{
		guess[i]='_';
	}
	guess[length]='\0';

	int attempts=6;
	char letter;
	int found;

	printf("welcome to hangman game\n");

	while(attempts>0)
	{
		printf("\nword : %s",guess);
		printf("\nattempts left : %d",attempts);

		printf("\nenter a letter :");
		scanf(" %c",&letter);

		found=0;

		
		for(int i=0;i<length;i++){
		       if(word[i]== letter){
			guess[i]=letter;
			found=1;
		       }
		}

		if(!found){
			attempts--;
			printf("wrong attempt");
		}

		if(strcmp(word,guess)==0){
			printf("\n you win! the word was %s\n",word);
			break;
		}
	}
	while(strcmp(word,guess)!=0){
	printf("\n game over! you lost.");
	printf("\nthe word was: %s",word);
	}

}
