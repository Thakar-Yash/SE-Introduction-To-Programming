// 7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include<stdio.h>
main()
{
	int i, num, rem;
	
	printf("\t Enter num to about 5 to 6 digit to rev it :- ");
	scanf("%d",&num);
	printf("\n\t Reverse num is = ");
	
	while(num>0)
	{
		rem = num%10;
		printf("%d",rem);
		num/=10;
	}
}
