/*
32.Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%\
*/

#include<stdio.h>
main()
{
	long int sal, newsal;
	float HRA, DA;
	
	printf("\t Enter Employee old Salary : ");
	scanf("%ld",&sal);
	
	if(sal<=10000)
	{
		HRA = 0.20;
		DA = 0.80;
	}
	else if(sal<=20000)
	{
		HRA = 0.25;
		DA = 0.90;
	}
	else
	{
		HRA = 0.30;
		DA = 0.95;
	}
	newsal = sal + HRA + DA;
	printf("\t New Incremented Salary of Employee is : %d",newsal);
}
