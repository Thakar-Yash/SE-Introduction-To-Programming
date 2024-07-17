// 11.WAP to accept 5 numbers from user and display in reverse order using for loop and array
#include<stdio.h>
main()
{
	int n[5],i;
	
	printf("\t Enter 5 Numbers : ");
	for(i=0; i<5; i++)
	{
		printf("\n\tNumber %d : ",i+1);
		scanf("%d",&n[i]);
	}
	printf("\t Reverse Numbers : ");
	for(i=4; i>=0; i--)
		printf("\t %d",n[i]);

}
