// 18. Write a C program to calculate profit and loss on a transaction

#include<stdio.h>
main()
{
	int pprice,sprice,profit,loss;
	
	printf("\t Enter the purchase price of product : ");
	scanf("%d",&pprice);
	
	printf("\t Enter the sell price of product : ");
	scanf("%d",&sprice);
	
	profit = sprice - pprice;
	
	loss = pprice - sprice;
	
	if(sprice>pprice)
	{
		printf("\t You got profit on transaction : %drs",profit);
	}
	else
	{
		printf("\t You got loss on transaction : %drs",loss);
	}
}
