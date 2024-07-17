// 12.WAP to find maximum number among 3 numbers using ternary operator

#include<stdio.h>
main()
{
	int num1, num2, num3, max;
	
	printf("\t Enter Number1 value : ");
	scanf("%d",&num1);
	
	printf("\t Enter Number2 value : ");
	scanf("%d",&num2);
	
	printf("\t Enter Number3 value : ");
	scanf("%d",&num3);
	
	max = (num1 > num2)?
		  ((num1 > num3)? num1 : num3):
		  ((num2 > num3)? num2 : num3);
		  
	printf("\t Maximum number is %d ",max);	
}
