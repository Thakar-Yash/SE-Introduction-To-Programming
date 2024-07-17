// 13.WAP to accept 5 numbers from user and check entered number is even or odd using of array

#include<stdio.h>
main()
{
	int n[5], i, even, odd;
	
	printf("\t Enter 5 Numbers : ");
	for(i=0; i<5; i++)
	{
		printf("\n\t Enter Number %d : ",i+1);
		scanf("%d",&n[i]);
	}
	
	printf("\n\t Check Even or Odd and print : ");
	for(i=0; i<5; i++)
	{
		if(n[i]%2==0)
			printf("\n\t %d Number is Even :",n[i]);
		else
			printf("\n\t %d Number is Odd :",n[i]);
	}
}
