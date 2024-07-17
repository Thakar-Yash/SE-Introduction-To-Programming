// 12.WAP to accept 5 students name and store it in array

#include<stdio.h>
main()
{
	int i;
	char name[5][10];
	
	printf("\t Enter Name : ");
	for(i=0; i<5; i++)
	{
		printf("\n\t Enter %d Name : ",i+1);
		scanf(" %s",&name[i]);
	}
	
	printf("\n\t Print The Names : ");
	for(i=0; i<5; i++)
	{
		printf("\n\t Name of %d : %s",i+1,name[i]);
	}
}
