// 9. Write a program in C to find the maximum number of characters in a string.
#include<stdio.h>
#include<string.h>

char findmaxChar(char str[])
{
	char maxchar = '\0';
	int i;
	
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]>maxchar)
		{
			maxchar = str[i];
		}
	}
	return maxchar;
};
main()
{
	char str[100];
	char maxchar;
	
	printf("\n\t Enter a string : ");
	gets(str);
	
	str[strcspn(str, "\n")] = 0;
	
	maxchar = findmaxChar(str);
	
	if(maxchar == '\0')
	{
		printf("\t No Character Found in the String : ");
	}
	else
	{
		printf("\t The Maximum number in String is : %c",maxchar);
	}
}
