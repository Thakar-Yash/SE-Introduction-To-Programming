// 28.Convert years into days and months

#include<stdio.h>
main()
{
	int years, days, months;
	
	printf("\t Enter Number of Years : ");
	scanf("%d",&years);
	
	days = years * 365;
	months = years * 12;
	
	printf("\n\t %d Years has %d Days ",years,days);
	printf("\n\t %d Years has %d Months ",years,months);
}
