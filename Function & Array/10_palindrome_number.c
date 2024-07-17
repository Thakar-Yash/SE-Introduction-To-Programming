// 10.WAP to perform Palindrome number using for loop and function

#include<stdio.h>
int palindrome(int num)
{
	int rev=0;
	int rem, n=num;
	
	for(;num!=0;num /= 10)
	{
		rem = num%10;
		rev = rev * 10 + rem;
	}
	
	return n == rev;
}

main()
{
	int number;
	
	printf("\t Enter any Integer number : ");
	scanf("%d",&number);
	
	if(palindrome(number))
		printf("\t %d is a Palindrome.",number);
	else 
		printf("\t %d is not a Palindrome.",number);
}
