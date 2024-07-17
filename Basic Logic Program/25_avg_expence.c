// 25.Accept 5 expense from user and find average of expense

#include<stdio.h>
main()
{
	int user1, user2, user3, user4, user5;
	float avg;
	
	printf("\t Enter user1 monthly expense : ");
	scanf("%d",&user1);
	
	printf("\t Enter user2 monthly expense : ");
	scanf("%d",&user2);
	
	printf("\t Enter user3 monthly expense : ");
	scanf("%d",&user3);
	
	printf("\t Enter user4 monthly expense : ");
	scanf("%d",&user4);
	
	printf("\t Enter user5 monthly expense : ");
	scanf("%d",&user5);
	
	avg = (user1 + user2 + user3 + user4 + user5)/5;
	printf("\n\t Users Avarage expense is : %.2f",avg);
}
