// 4. WAP to print table up to given numbers
#include<stdio.h>
main()
{
	int i, n;
	printf("\t Enter number to get Table : ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("\t %d * %d = %d \n",n,i,(n*i));
	}
}
