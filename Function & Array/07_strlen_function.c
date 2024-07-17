// 7. WAP Find out length of string without using inbuilt function

#include<stdio.h>
int strLen(char *str)
{
	int length = 0;
	while(str[length]!='\0')
	{
		length++;
	}
	return length;
}

main()
{
	char str[100];
	
	printf("\t Enter a String : ");
	gets(str);
	
	int length = strLen(str);
	printf("\n\t Length of Given String is : %d",length);
}
