// 21. Write a program in C to read any Month Number in integer and display the number of days for this month

#include<stdio.h>
main()
{
	int days, month, year;
	
	printf("\t Enter Number of Month : ");
	scanf("%d",&month);
	
	if(month<1 || month>12)
		printf("\t Enter month between 1 to 12 ");
		
	if(month == 2)
	{
		printf("\t Enter year : ");
		scanf("%d",&year);
	}
	
	switch(month)
	{
		case 1 :
		case 3 :
		case 5 :
		case 7 :
		case 8 :
		case 10:
		case 12:
			days = 31;
			break;
			
		case 4 :
		case 6 :
		case 9 :
		case 11:
			days = 30;
			break;
			
		case 2 :
			if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 ))
			{
				days = 29;
			}
			else
			{
				days = 28;
			}
			break;
		default:
			printf("Invalid month number ");
	}
	printf("\t %d DAYS in %d MONTH ",days,month);
}
