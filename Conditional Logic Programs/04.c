/*
4. WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement
*/

#include<stdio.h>
main()
{
	int A, B;
	char choice;
	
	printf("\t Enter Value of A : ");
	scanf("%d",&A);
	printf("\t Enter Value of B : ");
	scanf("%d",&B);
	
	printf("\n\t Enter '+' for Addition ");
	printf("\n\t Enter '-' for Subtraction ");
	printf("\n\t Enter '*' for Multiplication ");
	printf("\n\t Enter '/' for Division ");
	printf("\n\t Enter '%' for modulo ");
	printf("\n\t Enter your choice : ");
	scanf(" %c",&choice);
	
	if(choice == '+')
	{
		printf("\n\t %d + %d is = %d",A,B,(A+B));
	}
	else if(choice == '-')
	{
		printf("\n\t %d-%d is = %d",A,B,(A-B));
	}
	else if(choice == '*')
	{
		printf("\n\t %d * %d is = %d",A,B,(A*B));
	}
	else if(choice == '/')
	{
		printf("\n\t %d / %d is = %d",A,B,(A/B));
	}
	else if(choice == '%')
	{
		printf("\n\t %d mod %d is = %f",A,B,(A%B));
	}
	else
	{
		printf("\n\t Invalid choice...Try Again.....");
	}
}
