//17. Calculate person’s insurance premium based on salary
#include<stdio.h>
main(){
	int sal;
	int premiumRate;
	
	printf("\t Enter Person's monthaly salary : ");
	scanf("%d",&sal);
	printf("\n\tEnter PremiumRate : ");
	scanf("%d",&premiumRate);
	printf("\n\tPerson's insurance premium based on salary is : %d%d",(sal*premiumRate)/100);
}
