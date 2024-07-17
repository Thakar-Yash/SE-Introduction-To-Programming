// 22. Accept 3 numbers from user using while loop and check each numbers palindrome

#include<stdio.h>
main()
{
	int i, no, rem, rev, ono;	
	i=1;
	while(i<=1)
	{
		printf("\t Enter number : ");
		scanf("%d",&no);
		
		ono = no;
		rev = 0;
		
		while(no!=0)
		{
			rem = no%10;
			rev = rev * 10 + rem;
			no /= 10;
		}
		if(ono == rev)
			printf("\t Palidrome number ");
		else
			printf("\t Not Palidrome number ");
		i++;
	}
	
}
