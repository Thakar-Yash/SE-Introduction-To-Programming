// 13.calculate the Factorial of a Given Number using while loop
#include<stdio.h>
main()
{
	int n, i, fact=1;
	printf("\t Enter number to get Factorial of it = ");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		fact = fact * i;
		i++;
	}
	printf("\n\t Factorial of %d is %d",n,fact);
}
