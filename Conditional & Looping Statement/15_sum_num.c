// 15.Calculate sum of 10 numbers using of while loop
#include<stdio.h>
main()
{
	int n,sum=0,i;
	
	i=1;
	while(i<=10)
	{
		printf("\t Enter no :- ");
		scanf("%d",&n);
		sum+=n;
		i++;
	}
	printf("\t Sum of numbers is = %d",sum);
}
