/*
19.Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :

20. Unit 								21. Charge/unit
22. upto 350 							23. @1.20
24. 350 and above but less than 600 	25. @1.50
26. 600 and above but less than 800 	27. @1.80
28. 800 and above 						29. @2.00
*/

#include<stdio.h>
main()
{
	int ID,units;
	char name[20];
	
	printf("\t Enter User ID : ");
	scanf("%d",&ID);
	
	printf("\t Enter User Name : ");
	scanf("% s",&name);
	gets(name);
	//puts(name);
	
	printf("\t Enter User Consumed Units : ");
	scanf("%d",&units);
	
	if(units<350)
		printf("\t %s you have to pay %.2frs",name,units*1.20);
	
	else if(units>=350 && units<600)
		printf("\t %s you have to pay %.2frs",name,units*1.50);
	
	else if(units>=600 && units<800)
		printf("\t %s you have to pay %.2frs",name,units*1.80);
		
	else if(units>=800)
		printf("\t %s you have to pay %.2frs",name,units*2.00);
	
	else
		printf("\t Invalid Value.......");
	
}
