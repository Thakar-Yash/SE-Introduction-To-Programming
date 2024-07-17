// 7. Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
main()
{
	int str1[100], str2[100];
	int i=0;
	
	printf("\n\t Enter a String : ");
	gets(str1);
	//scanf("%s",&str1);
	
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	str2[i]='\0';
	
	printf("\n\t Original String : %s",str1);
	printf("\n\t Copied String : %s",str2);
}
