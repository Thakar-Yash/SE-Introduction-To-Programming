// 16.Accept 5 numbers from user and perform sum of array
#include<stdio.h>
main()
{
	int n[5], i, sum=0;
	
	printf("\t Enter 5 Numbers : ");
	for(i=0; i<5; i++)
	{
		printf("\n\t Enter Number %d : ",i+1);
		scanf("%d",&n[i]);
	}
	
	for(i=0; i<5; i++)
	{
		sum+=n[i];
	}
	printf("\n\t Sum is : %d",sum);
}
