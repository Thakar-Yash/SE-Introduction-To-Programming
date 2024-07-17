// 9. Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
main()
{
	int num, rem, sum=0;

	printf("\t Enter any 5 to 6 digit num = ");
	scanf("%d",&num);
	
	while(num!=0)
	{
		rem=num%10;
		sum += rem;
		num  = num / 10;	
	}	
	printf("\n\t sum of digit is = %d ",sum);		
}
