/* 22. Calculate compound interest (Compound Interest formula:
	a. Formula to calculate compound interest annually is given by:
	   Amount= P(1 + R/100)t 
	   
	b. Compound Interest = Amount – P */
	
#include<stdio.h>
main()
{
	int P,t;
	float R;
	printf("\t Enter Initial Principal Balance : ");
	scanf("%d",&P);
	printf("\n\t Enter Interest Rate : ");
	scanf("%f",&R);
	printf("\n\t Enter Number of Time Period in year : ");
	scanf("%d",&t);
	
	int Amount;
	Amount = P*( 1 + R/100)*t;
	printf("\n\t Amount is : %d",Amount);
	
	int CP = Amount - P;
	printf("\n\n\t Compound interest is : %d",CP);
	
}
