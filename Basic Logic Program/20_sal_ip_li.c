/* 20.Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary. */

#include<stdio.h>
main(){
	float sal, ip, li,rsal;
	
	printf("\tEnter user Salary :");
	scanf("%f",&sal);
	
	ip = sal*0.10;
	li = sal*0.10;
	
	rsal = sal-(ip+li);
	
	printf("\n\tUser Salary is : %.2f",sal);
	printf("\n\t User insurance primum is : %.2f",ip);
	printf("\n\t User Loan installment is : %.2f",li);
	printf("\n\t User has remaining sal is : %.2f",rsal);
}
