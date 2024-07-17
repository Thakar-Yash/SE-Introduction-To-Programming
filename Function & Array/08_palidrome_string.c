// 8. WAP to reverse a string and check that the string is palindrome or not

#include<stdio.h>
#include<string.h>

void reverseStr(char str[])
{
	int i;
	int n = strlen(str);
	char temp;
	for(i=0; i<n/2; i++)
	{
		temp = str[i];
		str[i] = str[n-i-1];
		str[n-i-1] = temp;
	}
}

int palidrome(char str[])
{
	int n = strlen(str);
	int i;
	for(i=0; i<n/2; i++)
	{
		if(str[i] != str[n-i-1])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	char str[100];
	printf("\t Enter a String : ");
	gets(str);
	
	char rstr[100];
	strcpy(rstr,str);
	reverseStr(rstr);
	
	printf("\t Reverse String : %s",rstr);
	
	if(palidrome(str))
		printf("\n\t The String is Palidrome.");
	else
		printf("\n\t The String is not Palidrome.");
}
