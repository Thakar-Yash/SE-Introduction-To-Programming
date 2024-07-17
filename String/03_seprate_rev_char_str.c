// 3. Write a program in C to print individual characters of a string in reverse order

#include<stdio.h>
#include<string.h>
main()
{
	char str[50];
	int i, length;
	
	printf("\t Enter a String : ");
	gets(str);
	
	length = strlen(str);
	printf("\t separate individual characters from a string in reverse order : \n\t");
	for(i=length-1; i>=0; i--)
	{
		printf(" %c",str[i]);
	}
}
