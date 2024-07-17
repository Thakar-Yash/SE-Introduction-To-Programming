/*
20. WAP program to print below output using for loop
01 02 03 04 05 06 07 08 09 10
11 12 13 14 15 16 17 18 19 20
..............
..............
41 42 43 44 45 46 47 48 49 50
*/

#include<stdio.h>
main()
{
	int r, c, no;
	
	no=1;
	for(r=1; r<=5; r++)
	{
		for(c=1; c<=10; c++)
		{
			printf("%.2d ",no);
			no++;
		}
		printf("\n");
	}
}
