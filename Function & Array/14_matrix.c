// 14.Perform 2D matrix array

#include<stdio.h>
main()
{
	int r=3, c=3;
	int m1[r][c];  
	int i, j;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf(" %d",m1[i][j]);	
		}	
		printf("\n");
	} 
}
