// 6. Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
#include<string.h>

main()
{
	char str[100];
	int alphabets = 0, digits = 0, specialchar = 0;
	int i=0;
	
	printf("\n\t Enter a String : ");
	//scanf("%s",&str);
	gets(str);
	
	while(str[i]!='\0')
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
			alphabets++;
		}
		else if(str[i]>='0' && str[i]<='9'){
			digits++;
		}
		else if (str[i]!='\n'){
			specialchar++;
		}
		i++;
	}
	printf("\n\t Alphabets are : %d",alphabets);
	printf("\n\t Digits are : %d",digits);
	printf("\n\t Special Charcters are : %d",specialchar);
}
