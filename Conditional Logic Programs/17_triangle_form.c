// 17.Write a C program to check whether a triangle can be formed with the given values for the angles.

#include<stdio.h>
main()
{
	int A1, A2, A3, sum;
	
	printf("\t Enter Value of Angle1 : ");
	scanf("%d",&A1);
	
	printf("\n\t Enter Value of Angle2 : ");
	scanf("%d",&A2);
	
	printf("\n\t Enter Value of Angle3 : ");
	scanf("%d",&A3);
	
	sum = A1 + A2 + A3;
	
	if(sum == 180)
	{
		printf("\n\t Triangle is Formed ");
	}
	else
	{
		printf("\n\t Triangle is not Formed ");
	}
}
