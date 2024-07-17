// 5. Write a program in C to compare two strings without using string library functions

#include<stdio.h>
#include<string.h>

int compareString(char str1[], char str2[])
{
	int i=0;
	
	while(str1[i]!='\0' && str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
		{
			return 0;
		}
	i++;
	}
	if(str1[i] == '\0' && str2[i] == '\0')
		return 1;
	else
		return 0;
}

main()
{
	char str1[100], str2[100];
	
	printf("\t Enter String 1 : ");
	//scanf("%s",&str1);
	gets(str1);
	
	printf("\t Enter String 2 : ");
	//scanf("%s",&str2);
	gets(str2);
	
	if(compareString(str1, str2))
		printf("\t Both Strings are same : ");
	else
		printf("\t Both Strings are not same :");
	
}
//int compareString(char str1[], char str2[])

