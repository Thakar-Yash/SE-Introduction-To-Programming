//1. Write a program in C to find the length of a string without using library functions.

#include<stdio.h>
#include<string.h>
main()
{
	char str[50];
	int i, count=0;
	
	printf("\t Enter a String : ");
	gets(str);
	
	for(i=0; str[i]!='\0'; i++)
	{
		count++;
	}
	printf("\n\t Your String Length is : %d",count);
	
}
