// 5. WAP to print factorial of given number

#include<stdio.h>
main()
{
	int i, n, fact=1;
	
	printf("\t Enter num to get Favtorial of it :- ");
	scanf("%d",&n);
	
	if(n==0)
	{
		printf("\t Give Positive num ");
	}
	else
	{
		for(i=1; i<=n; i++)
		{
			fact*=i;	
		}
		printf("Factorial of %d num is = %d",n,fact);	
	}
	
}

/*
i=1;
		while(i<=n)
		{
			fact = fact * i;
			i++;
		}
		printf("Factorial of %d num is = %d",n,fact);
*/
