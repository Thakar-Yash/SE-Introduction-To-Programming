// 10.WAP to check whether a number is negative, positive or zero.

#include<stdio.h>
main()
{
	int num;
	
	printf("\t Enter Number : ");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("\t Number is Positive");
	}
	else if(num<0)
	{
		printf("\t Number is Negaitive");
	}
	else
	{
		printf("\t Number is Zero");
	}
}
