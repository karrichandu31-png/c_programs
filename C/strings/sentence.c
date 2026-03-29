#include<stdio.h>
void main(){
	 char sent[100];
	 printf("Enter a sentence");
	 scanf("%[^\n]",sent);
         printf("entered sentence is %s",sent);
}
