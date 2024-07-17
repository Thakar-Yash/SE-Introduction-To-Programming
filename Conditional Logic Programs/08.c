/* 8. WAP to accept the height of a person in centimeters and categorize the
person according to their height */

#include<stdio.h>
main()
{
	float height;
	
	printf("\t Enter Person's height in CM : ");
	scanf("%f",&height);
	
	if(height<162.5)
	{
		printf("\t Person is Very Short");
	}
	else if(height<170)
	{
		printf("\t Person is Short");
	}
	else if(height<180)
	{
		printf("\t Person's height is Average");
	}
	else if(height<190.5)
	{
		printf("\t Person is Tall ");
	}
	else
	{
		printf("\t Person is Very Tall ");
	}
}
	
	
	
	
	
	
