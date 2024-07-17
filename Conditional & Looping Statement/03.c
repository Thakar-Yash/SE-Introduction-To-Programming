/* 3. WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers*/

#include<stdio.h>
main()
{
	int i,num,odd=0,odd_sum=0,even=0,even_sum=0;

	i=1;
	while(i<=10)
	{
		printf("\n\t Enter Num :- ");
		scanf("%d",&num);
		printf("\tNum is = %d\n",num);
		i++;
		
		if(num%2==0)
		{
			even++;
			even_sum = 	even_sum + num;
		}
		else
		{
			odd++;
			odd_sum = odd_sum + num;	
		}	
	}
	printf("\n\t Tere are %d Even numbers ",even);	
	printf("\n\t Tere are %d Odd numbers ",odd);
	printf("\n\t Sum of Even numbers is :- %d",even_sum);
	printf("\n\t Sum of Odd numbers is :- %d",odd_sum);
}
/*
int i,num,odd=0,odd_sum=0,even=0,even_sum=0;
	
	for(i=1;i<=10;i++)
	{
		printf("\n Enter num = ");
		scanf("%d",&num);
		printf("num is = %d \n",num);
		if(num%2==0)
		{
			even++;
			even_sum+=num;
		}
		else
		{
			odd++;
			odd_sum+=num;
		}
	}
	printf("\n\tTotal Even num is = %d",even);
	printf("\n\tTotal Odd num is = %d",odd);
	printf("\n\tSum of Even num is = %d",even_sum);
	printf("\n\tSum of Odd num is = %d",odd_sum);*/
