/*
      *
    * * * 
  * * * * *
* * * * * * *
*/

#include<stdio.h>
main()
{
	int r, c, n=5;
	
	for(r=1; r<=n; r++)
	{
		for(c=n; c>=1; c--)
		{
			if(r>=c)
				printf(" *  ");
			else
				printf("   ");
		}
		printf("\n");
	}
}
