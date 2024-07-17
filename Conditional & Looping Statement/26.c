// 26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include<stdio.h>
main()
{
	int i, no, sum=0, totalsum=0;
	
	printf("Enter a positive integer: ");
    scanf("%d", &no);
	for(i=1; i<=no; i++)
	{
		sum+=i;
		totalsum+=sum;
	}
	printf("\t no is = %d",no);
	printf("\n\t totalsum is = %d",totalsum);
}
