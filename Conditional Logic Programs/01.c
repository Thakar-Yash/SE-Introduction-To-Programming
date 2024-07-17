/* 1. Write a C program to accept two integers and check whether they are equal
or not */

#include<stdio.h>
main()
{
	int A, B;
	
	printf("\t Enter value of A : ");
	scanf("%d",&A);
	printf("\t Enter value of B : ");
	scanf("%d",&B);
	
	if(A == B)
	{
		printf("\t Equal Numbers ");
	}
	else
	{
		printf("\t Not Equal Numbers ");
	}
}
