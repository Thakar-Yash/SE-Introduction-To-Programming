// 14.WAP to find the largest of three numbers.
#include<stdio.h>
main()
{
	int num1, num2, num3, largest;
	
	printf("\t Enter Number1 value : ");
	scanf("%d",&num1);
	
	printf("\t Enter Number2 value : ");
	scanf("%d",&num2);
	
	printf("\t Enter Number3 value : ");
	scanf("%d",&num3);
	
	if(num1>num2 && num1>num3)
		largest = num1;
	else if(num2>num3 && num2>num1)
		largest = num2;
	else
		largest = num3;
	printf("\t The largest number is %d",largest);
	
}
