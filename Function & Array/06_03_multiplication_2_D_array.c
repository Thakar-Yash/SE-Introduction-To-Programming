// 6. WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array

#include<stdio.h>
main()
{
	int m1[3][3], m2[3][3], m3[3][3];
	int i, j, k;
	
	printf("-------M1[3][3]-------");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n\t Enter m1[%d][%d] = ",i,j);
			scanf("%d",&m1[i][j]);	
		}
	}
	
	printf("-------M2[3][3]-------");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n\t Enter m2[%d][%d] = ",i,j);
			scanf("%d",&m2[i][j]);	
		}
	}
	
	printf("-------M1[3][3]-------");
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",m1[i][j]);	
		}
		printf("\n");
	}
	
	printf("-------M2[3][3]-------");
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",m2[i][j]);	
		}
		printf("\n");
	}
	
	// Multiplication
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			m3[i][j]=0;
			for(k=0; k<3; k++)
			{
				m3[i][j]+=m1[i][k] * m2[k][j];
			}
		}
	}
	
	printf("-------M3[3][3]-------");
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",m3[i][j]);	
		}
		printf("\n");
	}
	
}
