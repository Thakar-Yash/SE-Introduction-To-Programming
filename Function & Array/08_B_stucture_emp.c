/* 08. Write a program of structure employee that provides the following
	0b. Write a program of structure for five employee that
	   provides the following information -print and display
	   */
	   
#include<stdio.h>

struct Employee
{
	int empno;
	char empname[50];
	char empaddr[100];
	int empage;
}E[5];

main()
{
	int i;
	for(i=0; i<5; i++)
	{
		printf("\n\t Enter details for Employee %d\n", i + 1);
		
		printf("\t Enter Employee Number : ");
		scanf("%d",&E[i].empno);
	
		printf("\n\t Enter Employee Name : ");
		scanf(" %s",&E[i].empname);
	
		printf("\n\t Enter Employee Address : ");
		scanf(" %s",&E[i].empaddr);
	
		printf("\n\t Enter Employee Age : ");
		scanf("%d",&E[i].empage);
	
		printf("\n\t Emplyee Number : %d",E[i].empno);
		printf("\n\t Emplyee Name : %s",E[i].empname);
		printf("\n\t Emplyee Address : %s",E[i].empaddr);
		printf("\n\t Emplyee Age : %d",E[i].empage);
		
	}
}
