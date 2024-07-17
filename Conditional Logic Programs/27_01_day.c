/* 37. WAP to show
	i. Monday to Sunday using switch case
*/

#include<stdio.h>
main()
{
	int num;
	
	printf("\t Enter a Number to get day : ");
	scanf("%d",&num);
	
	switch(num)
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
