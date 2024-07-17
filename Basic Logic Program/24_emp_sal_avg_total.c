// 24.Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
main()
{
	char E1[10],E2[10],E3[10],E4[10],E5[10];
	int sal1,sal2,sal3,sal4,sal5;
	long int total;
	float avg;
	
	printf("\t Enter Employe 1 name : ");
	scanf("%s",&E1[10]);
	printf("\t Enter Employe 1 sal : ");
	scanf("%d",&sal1);
	
	printf("\n\t Enter Employe 2 name : ");
	scanf("%s",&E2[10]);
	printf("\t Enter Employe 2 sal : ");
	scanf("%d",&sal2);
	
	printf("\n\t Enter Employe 3 name : ");
	scanf("%s",&E3[10]);
	printf("\t Enter Employe 3 sal : ");
	scanf("%d",&sal3);
	
	printf("\n\t Enter Employe 4 name : ");
	scanf("%s",&E4[10]);
	printf("\t Enter Employe 4 sal : ");
	scanf("%d",&sal4);
	
	printf("\n\t Enter Employe 5 name : ");
	scanf("%s",&E5[10]);	
	printf("\t Enter Employe 5 sal : ");
	scanf("%d",&sal5);
	
	total = sal1 + sal2 + sal3 + sal4 + sal5;
	printf("\n\t 5 Emplyees salary total is : %ld",total);
	
	avg = total / 5;
	printf("\n\t Avarage salary is : %.2f",avg);
	
}
