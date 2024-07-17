//8. Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include<stdio.h>
main()
{
	int num, rem, max=0;

	printf("\t Enter any 5 to 6 digit num = ");
	scanf("%d",&num);
	
	while(num!=0)
	{
		rem=num%10;
		if(rem>max)
		{
			max = rem;
		}
		num  = num / 10;	
	}	
	printf("\n\t Max digit is = %d ",max);		
}
