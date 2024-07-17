// 25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<stdio.h>
main()
{
	int i, no, sum=0, mul;
	
	printf("Enter a positive integer: ");
    scanf("%d", &no);
	for(i=1; i<=no; i++)
	{
		sum+=i;
		mul+=i*i;
	}
	printf("\t no is = %d",no);
	printf("\n\t sum is = %d",sum);
	printf("\n\t mul is = %d",mul);
}
