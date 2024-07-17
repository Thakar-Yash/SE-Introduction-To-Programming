// 2. Write a program in C to separate individual characters from a string.

#include<stdio.h>
#include<string.h>
main()
{
	char str[50];
	int i, count=0;
	
	printf("\t Enter a String : ");
	gets(str);
	
	printf("\t separate individual characters from a string : ");
	for(i=0; str[i]!='\0'; i++)
	{
		printf("\n\t %c",str[i]);
	}
}
