// 35.Accept the input month number and print number of days in that month.

#include<stdio.h>
#include<string.h>
main()
{
	int days, year;
	char month[10];
	
	printf("\t Enter Name of Month : ");
	scanf("%s",&month);
	
	/* if(month<1 || month>12)
		printf("\t Enter month between 1 to 12 "); */
		
	if(month == 'feb')
	{
		printf("\t Enter year : ");
		scanf("%d",&year);
	}
	
	switch(month)
	{
		case "jan" :
		case "mar" :
		case "may" :
		case "jul" :
		case "aug" :
		case "oct" :
		case "dec" :
			days = 31;
			break;
			
		case "apr" :
		case "jun" :
		case "sep" :
		case "nov" :
			days = 30;
			break;
			
		case "feb" :
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
			printf("Invalid month ");
	}
	printf("\t %d DAYS in %s MONTH ",days,month);
}
