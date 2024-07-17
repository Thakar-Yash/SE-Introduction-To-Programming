// 19.Calculate compound interest
#include<stdio.h>
main()
{
	long int P;
	int t;
	float R;
	
	printf("\t Enter Initial Principal Balance : ");
	scanf("%ld",&P);
	printf("\n\t Enter Interest Rate : ");
	scanf("%f",&R);
	printf("\n\t Enter Number of Time Period in year : ");
	scanf("%d",&t);
	
	
	long int CP =( P*( 1 + R/100) *t ) - P;
	printf("\n\n\t Compound interest is : %ld",CP);
}
