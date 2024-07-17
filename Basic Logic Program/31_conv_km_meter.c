// 31. Convert kilometers into meters

#include<stdio.h>
main()
{
	int km, m;
	
	printf("\t Enter Kilometer convert into meters : ");
	scanf("%d",&km);
	
	m = km * 1000;
	
	printf("\n\t %d Kilometers = %d meters ",km,m);
}
