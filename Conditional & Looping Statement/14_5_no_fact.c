// 14.Accept 5 numbers from user and find those numbers factorials

#include<stdio.h>
main()
{
	int i, n, fact, j;
	
	for(i=1; i<=5; i++)
	{
		printf("\tEnter no get factorial :- ");
		scanf("%d",&n);
		
		fact = 1;
		for(j=1; j<=n; j++)
		{
			fact*=j;
		}
		printf("\t Factorial is = %d\n ",fact);
	}
}
