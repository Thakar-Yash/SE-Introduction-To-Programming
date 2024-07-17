// 17.Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include<stdio.h>
main()
{
	int n,sum=0,i,odd=0,odd_count=0,even=0,even_count=0;
	
	i=1;
	while(i<=10)
	{
		printf("\t Enter no :- ");
		scanf("%d",&n);
		sum+=n;
		i++;
		if(n%2==0)
		{
			even_count++;
			even+=n;
		}
		else
		{
			odd_count++;
			odd+=n;
		}
	}
	printf("\t Sum of numbers is = %d",sum);
	printf("\n\t Sum of odd numbers is = %d",odd);
	printf("\n\t Sum of even numbers is = %d",even);
}
