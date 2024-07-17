// 8. Write a program in C to count the total number of vowels or consonants in a string.

#include<stdio.h>
#include<string.h>

main()
{
	char str[100];
	int vowels = 0, consonents = 0;
	int i=0;
	
	printf("\n\t Enter a String : ");
	gets(str);
	
	while(str[i]!='\0')
	{
		if((str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') || 
			(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'))
		{
			vowels++;
		}
		else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
		{
			consonents++;
		}
		i++;
	}
	printf("\n\t Vowels in String : %d",vowels);
	printf("\n\t Consonents in String : %d",consonents);
}
