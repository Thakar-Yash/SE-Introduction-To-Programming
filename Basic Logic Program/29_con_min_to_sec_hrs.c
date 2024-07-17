// 29.Convert minutes into seconds and hours

#include<stdio.h>
main()
{
	int min, sec;
	float hrs;
	printf("\t Enter Minutes : ");
	scanf("%d",&min);
	
	sec = min * 60;
	hrs = min / 60;
	
	printf("\n\t In %d Minutes %d Seconds ",sec,min);
	printf("\n\t In %d Minutes %.2f Hours ",min,hrs);
}
