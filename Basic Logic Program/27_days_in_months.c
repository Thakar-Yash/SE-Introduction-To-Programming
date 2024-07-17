// 27.Convert days into months

//The average length of a month in the Gregorian calendar is approximately 30.44 days 

#include<stdio.h>
main()
{
	int days;
	float approx = 30.44, months;
	
	printf("\t Enter the number of Days : ");
	scanf("%d",&days);
	
	months = days / approx;
	
	printf("\n\t %d Days is approximately in %.2f Months :",days,months);
	
}
