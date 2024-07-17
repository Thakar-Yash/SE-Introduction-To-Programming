/* 9. C Program to Check Uppercase or Lowercase or Digit or Special
Character */

#include<stdio.h>
main()
{
	char ch;
	
	printf("\t Enter any Character : ");
	scanf("%c",&ch);
	int asc = ch;
	//printf("\t %d",asc);
	
	if(asc >= 65 && asc <= 90)
	{
		printf("\t Uppercase Latter ");
	}
	else if(asc >= 97 && asc <= 122)
	{
		printf("\t Lowercase Latter ");
	}
	else if(asc >= 48 && asc <= 57)
	{
		printf("\t Digits ");
	}
	else
	{
		printf("\t Special Character ");
	}
}
	
	
	
