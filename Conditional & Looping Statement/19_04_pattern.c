/* 
A
A B
A B C
A B C D
A B C D E
*/

#include<stdio.h>
main()
{
	int r,c;
	char ch;
	
	
	for(r=1;r<=5;r++)
	{
		ch=65;
		for(c=1;c<=r;c++)
		{
			printf(" %c ",ch);
			ch++;
		}
		printf("\n");
	}
}
