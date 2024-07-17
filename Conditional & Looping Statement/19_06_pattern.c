/*
*
* * 
* * * 
* * * *
* * * * *
* * * *
* * *
* *
*
*/
#include<stdio.h>
main()
{
	int r, c, n=5;
	
	for(r=1; r<=n; r++)
	{
		for(c=1; c<=r; c++)
		{
				printf("* ");
		}
		printf("\n");
	}
	for(r=n-1; r>=1; r--)
	{
		for(c=1; c<=r; c++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

