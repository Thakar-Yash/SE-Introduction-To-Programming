// 14.Write a program in C to combine two strings manually

#include<stdio.h>
#include<string.h>

void combineString(char *str1, char *str2, char *str3){
	while(*str1){
		*str3 = *str1;
		str1++;
		str3++;
	}
	while(*str2){
		*str3 = *str2;
		str2++;
		str3++;
	}
	*str3='\0';
}
main()
{
	char str1[100],str2[100],str3[200];
	
	printf("\n\t Enter a String : ");
	gets(str1);
	
	printf("\n\t Enter another String : ");
	gets(str2);
	
	combineString(str1, str2, str3);
	
	printf("\n\t String 3 : %s",str3);
}
