// 19.Calculate compound interest
#include<stdio.h>
main()
{
	int P,R,t,CP;
	
	printf("\t Enter Initial Principal Balance : ");
	scanf("%d",&P);
	printf("\n\t Enter Interest Rate : ");
	scanf("%d",&R);
	printf("\n\t Enter Number of Time Period in year : ");
	scanf("%d",&t);
	
	CP = (P*(1+R/100)*t)-P;
	printf("\n\n\t Compound interest is : %d",CP);
}
