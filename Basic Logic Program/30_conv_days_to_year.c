// 30.WAP to convert years into days and days into years.

#include<stdio.h>
main()
{
	int years, days, ytd; 
	float dty;
	printf("\t Enter Days : ");
	scanf("%d",&days);
	
	printf("\n\t Enter Years : ");
	scanf("%d",&years);
	
	dty = days / 365;
	printf("\n\t Days into Years : %.2f",dty);
	
	ytd = years * 365;
	printf("\n\t Years to Days : %d",ytd);
}
