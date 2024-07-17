// 16. Calculate the Sum of Natural Numbers Using the While Loop

#include<stdio.h>
main()
{
	int sum=0,i,n;
	printf("\t Ente number = ");
	scanf("%d",&n); 
	i=1;
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("\t Sum of numbers is = %d",sum);
}
