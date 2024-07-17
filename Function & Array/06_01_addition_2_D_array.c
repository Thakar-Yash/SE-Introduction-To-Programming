// 6. WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
// Addition

#include<stdio.h>
main()
{
	int i, j, A[3][3], B[3][3], c[3][3];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value of A[%d][%d] : ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	
	printf("\n");
	printf("\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value of B[%d][%d] : ",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	
	printf("\n");
	printf("\n");
	
	printf("A[3][3] = \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",A[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("B[3][3] = \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",B[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("\n");
	
	printf("A[3][3] + B[3][3] = \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %.2d",A[i][j] + B[i][j]);
		}
		printf("\n");
	}
	
}
