/* 08. Write a program of structure employee that provides the following
   a. information -print and display empno, empname, address
      andage*/
      
#include<stdio.h>

struct Employee
{
	int empno;
	char empname[50];
	char empaddr[100];
	int empage;
}E;

main()
{
	printf("\t Enter Employee Number : ");
	scanf("%d",&E.empno);
	
	printf("\n\t Enter Employee Name : ");
	scanf(" %s",&E.empname);
	
	printf("\n\t Enter Employee Address : ");
	scanf(" %s",&E.empaddr);
	
	printf("\n\t Enter Employee Age : ");
	scanf("%d",&E.empage);
	
	printf("\n\t Emplyee Number : %d",E.empno);
	printf("\n\t Emplyee Name : %s",E.empname);
	printf("\n\t Emplyee Address : %s",E.empaddr);
	printf("\n\t Emplyee Age : %d",E.empage);
}
