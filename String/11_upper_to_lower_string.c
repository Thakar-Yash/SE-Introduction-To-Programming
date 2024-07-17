// 11.Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.

#include<stdio.h>
#include<string.h>

void swapString(char *str)
{
	int i;
	for(i=0; str[i]!='\0'; i++)
	{
		if(islower(str[i]))
		{
			str[i]=toupper(str[i]);
		}
		else if(isupper(str[i]))
		{
			str[i]=tolower(str[i]);
		}
	}
}
main()
{
	char str[100];
	
	printf("\n\t Enter a String : ");
	gets(str);
	
	swapString(str);
	
	printf("\n\t Modified String is : %s",str);
}
