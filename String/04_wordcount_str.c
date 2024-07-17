// 4. Write a program in C to count the total number of words in a string.
#include<stdio.h>
#include<string.h>

int countWords(char *str);

main()
{
	char str[100];
	
	printf("\t Enter a String : ");
	gets(str);
	
	int wordcount = countWords(str);
	
	printf("\n\t Total number of words : %d",wordcount);
}

int countWords(char *str)
{
	int word = 0;
	int wordcount = 0;
	
	while(*str)
	{
		if(*str==' ')
			word = 0;
		else if(word == 0)
		{
			word = 1;
			wordcount++;
		}
		str++;
	}
	return wordcount;
}
