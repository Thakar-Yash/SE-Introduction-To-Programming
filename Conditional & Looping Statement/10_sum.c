// 10.Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)

#include<stdio.h>
main()
{
	int i, num, rem, fdigit, ldigit, sum=0;
	
	printf("\t Enter any 5 to 6 digit num = ");
	scanf("%d",&num);
	
	ldigit = num % 10;
	
	fdigit = num;
	while(fdigit>=10){
		fdigit /= 10;
	}
	sum = fdigit + ldigit;
	
	printf("\n\t Sum is = %d",sum);
	
}
