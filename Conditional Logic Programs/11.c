// 11.WAP to find number is even or odd using ternary operator

#include<stdio.h>
main()
{
	int num;
	
	printf("\t Enter Number : ");
	scanf("%d",&num);
	
	(num%2 == 0) ? printf("\t Even Number") : printf("\t Odd Number");
	
}
