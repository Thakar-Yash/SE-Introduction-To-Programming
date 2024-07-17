/*
A 
B C
D E F
G H I J
K L M N O 
*/

#include<stdio.h>
main()
{
	int r, c;
	char c1;
	
	c1 = 65;
	r=1;
	while(r<=5)
	{
		c=1;
		while(c<=r)
		{
			printf(" %c ",c1);
			c1++;
			c++;
		}
		printf("\n");
		r++;
	}
}
