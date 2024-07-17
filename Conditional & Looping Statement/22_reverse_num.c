// 23. C Program to Reverse a Number Using FOR Loop

#include<stdio.h>
main()
{
	int no, rev=0, rem;
	
	printf("\t Enter num = ");
	scanf("%d",&no);

	for(; no!=0; no/=10)
	{
		rem=no%10;
		rev= rev * 10 + rem;
	}
	printf("\t Reverse num = %d",rev);
}


