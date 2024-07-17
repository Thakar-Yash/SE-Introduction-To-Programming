// 15.Store 5 numbers in array and sort it in ascending order
#include<stdio.h>
main()
{
	int n[5], i, j, temp;
	
	printf("\t Enter 5 Numbers : ");
	for(i=0; i<5; i++)
	{
		printf("\n\t Enter %d Number : ",i+1);
		scanf("%d",&n[i]);
	}
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5-i-1; j++)
		{
			if(n[j]>n[j+1])
			{
				temp = n[j];
				n[j] = n[j+1];
				n[j+1] = temp;
			}
		}
	}
	printf("\n\t Sort In Ascending Order : ");
	for(i=0; i<5; i++)
	{
		printf(" %d",n[i]);
	}
}
