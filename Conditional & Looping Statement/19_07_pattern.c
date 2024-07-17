#include<stdio.h>
main()
{
	int r, c, n=10,no;
	
	r=1;
	no=1;
	while(r<=10)
	{
		c=1;
		while(c<=10)
		{
			printf("%.2d ",no);
			c++;
			no++;
		}
		r++;
		printf("\n");
	}
}
