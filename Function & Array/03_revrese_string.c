// 3. WAP to find reverse of string using recursion

#include<stdio.h>
#include<string.h>

void reverseString(char *str, int start, int end)
{
	char temp;
	
	if(start>=end)
	{
		return;
	}
	
	temp = str[start];
	str[start] = str[end];
	str[end] = temp;
	
	reverseString(str, start+1, end-1);
}

main()
{
	char str[100];
	int len;
	
	printf("\t Enter a String : ");
	gets(str);
	
	len = strlen(str);
	reverseString(str, 0, len-1);
	
	printf("\n\t Reversed String is : %s",str);
	
	return 0;
}
