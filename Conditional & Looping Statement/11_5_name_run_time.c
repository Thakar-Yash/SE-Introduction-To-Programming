// 11. Accept 5 names from user at run time.
#include<stdio.h>
main()
{
	int i; 
	char name[10];
	
	i = 1;
	while(i<=5)
	{
		printf("\n\t Enter Name :- ");
		gets(name);
		printf("\t %s \n",name);
		i++;
	}
}
