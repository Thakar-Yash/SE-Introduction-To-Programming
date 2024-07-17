// 15. Write a program in C to find the largest and smallest words in a string.
#include<stdio.h>
#include<string.h>
#define max 1000

void findWords(char *str, char *largest, char *smallest){
	char *word = strtok(str," ");
	strcpy(largest, word);
	strcpy(smallest, word);
	
	while(word!=NULL){
		if(strlen(word)>strlen(largest)){
			strcpy(largest, word);
		}
		if(strlen(word)<strlen(smallest)){
			strcpy(smallest, word);
		}
		word = strtok(NULL," ");
	}	
}

main()
{
	char str[max];
	char largest[max], smallest[max];
	
	printf("\n\t Enter a String : ");
	gets(str);
	
	findWords(str, largest, smallest);
	
	printf("\n\t Largest Word in String is : %s",largest);
	printf("\n\t Smallest Word in String is : %s",smallest);
}
