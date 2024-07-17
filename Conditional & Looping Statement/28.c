// 28. 1 2 3 6 9 18 27 54...
#include<stdio.h>
main()
{
	int i, no, sum=0;
	
	printf("Enter a positive integer: ");
    scanf("%d", &no);
    for(i=1; i<=no; i++)
    {
    	sum+=i;
    	printf("%d ",sum);
	}
}
