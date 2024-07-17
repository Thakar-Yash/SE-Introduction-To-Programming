// 6. Find the Character Is Vowel or Not

#include<stdio.h>
main()
{
	int ch;
	
	printf("\t Enter any character : ");
	scanf("%c",&ch);
	
	if(ch == 'a' || ch == 'A')
	{
		printf("\t %c is a Vowel ",ch);
	}
	else if(ch == 'e' || ch == 'E')
	{
		printf("\t %c is a Vowel ",ch);
	}
	else if(ch == 'i' || ch == 'I')
	{
		printf("\t %c is a Vowel ",ch);
	}
	else if(ch == 'o' || ch == 'O')
	{
		printf("\t %c is a Vowel ",ch);
	}
	else if(ch == 'u' || ch == 'U')
	{
		printf("\t %c is a Vowel ",ch);
	}
	else
	{
		printf("\t %c is Consonant ",ch);
	}
}
