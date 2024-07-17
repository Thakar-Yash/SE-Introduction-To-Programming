// 6. WAP to print Fibonacci series up to given numbers

#include<stdio.h>
main()
{
	int i, a=0, b=1, sum, n;
	
	printf("\t Enter no to get Fibonacci series = ");
	scanf("%d",&n);
	
	printf(" %d %d",a,b);
	for (i=1; i<=n; i++)
	{
		sum = a + b;
		printf(" %d",sum);
		a = b;
		b = sum;
		sum = a;
	}
	
}
/*
i=1;
	while(i<n)
	{
		sum = a + b;
		printf(" %d",sum);
		a = b;
		b = sum;
		sum = a;
		i++;
	}
*/
