// 24. 1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>
main()
{
	int i, no, sum=0;
	
	printf("Enter a positive integer: ");
    scanf("%d", &no);
	for(i=1; i<=no; i++)
	{
		sum+=i;
	}
	printf("%d %d",no,sum);
}
