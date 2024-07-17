// 33. WAP to input the week number and print week day.

#include<stdio.h>
main()
{
	int week_number;
	
	printf("\t Enter the Week Number : ");
	scanf("%d",&week_number);
	
	switch(week_number)
	{
		case 1 : printf("\t Sunday");
		break;
		case 2 : printf("\t Monday");
		break;
		case 3 : printf("\t Tuesday");
		break;
		case 4 : printf("\t Wednesday");
		break;
		case 5 : printf("\t Thrusday");
		break;
		case 6 : printf("\t Friday");
		break;
		case 7 : printf("\t Saturday");
		break;
		default:
			printf("\t Enter number betweeen 1-7 ");
	}
}
