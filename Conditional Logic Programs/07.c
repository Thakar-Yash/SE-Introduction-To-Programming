// 7. Accept marks from user and check pass or fail

#include<stdio.h>
main()
{
	int marks;
	
	printf("\t Enter User Marks : ");
	scanf("%d",&marks);
	
	if(marks>33)
	{
		printf("\t User is Pass ");
	}
	else
	{
		printf("\t User is Fail ");
	}
}
