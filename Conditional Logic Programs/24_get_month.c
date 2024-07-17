// 34. Accept month number and display month name
#include<stdio.h>
main()
{
	int month_num;
	
	printf("\t Enter month number to get the month name : ");
	scanf("%d",&month_num);
	
	switch(month_num)
	{
		case 1 : printf("\n\t JANUARY");
				 break;
				 
		case 2 : printf("\n\t FEBRUARY");
				 break;
				 
		case 3 : printf("\n\t MARCH");
				 break;
		
		case 4 : printf("\n\t APRIL");
				 break;
				 
		case 5 : printf("\n\t MAY");
				 break;
				 
		case 6 : printf("\n\t JUNE");
				 break;
				 
		case 7 : printf("\n\t JULY");
				 break;
				 
		case 8 : printf("\n\t AUGUEST");
				 break;
				 
		case 9 : printf("\n\t SEPTEMBER");
				 break;
				 
		case 10 : printf("\n\t OCTOBER");
				 break;
				 
		case 11 : printf("\n\t NOVEMBER");
				 break;
				 
		case 12 : printf("\n\t DECEMBER");
				 break;
				 
		default:
			printf("\t Enter month between 1 to 12 ");
	}
}
