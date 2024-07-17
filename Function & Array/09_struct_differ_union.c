// 9. WAP to show difference between Structure and Union.

#include<stdio.h>

struct Person
{
	char name[50];
	int age;
	float height;
}P;

union Data
{
	char name[50];
	int age;
	float height;
}U;


main()
{
	printf("\t Structure : ");
	printf("\n\t Enter name of Person : ");
	gets(P.name);
	
	printf("\n\t Enter Age of Person : ");
	scanf("%d",&P.age);
	
	printf("\n\t Enter Person's Height : ");
	scanf("%f",&P.height);
	
	printf("\n\t Person Name : %s",P.name);
	printf("\n\t Person Age : %d",P.age);
	printf("\n\t Person's Height : %.2f",P.height);
	
	printf("\n\n\t union : ");
	printf("\n\t Enter name of Person : ");
	scanf(" %s",&U.name);
	printf("\t Person Name : %s",U.name);
	
	printf("\n\t Enter Age of Person : ");
	scanf("%d",&U.age);
	printf("\t Person Age : %d",U.age);
	
	printf("\n\t Enter Person's Height : ");
	scanf("%f",&U.height);
	printf("\t Person's Height : %.2f",U.height);
}

