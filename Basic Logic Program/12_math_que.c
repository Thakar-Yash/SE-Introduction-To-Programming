/* 12.Accept number of students from user. I need to give 5 apples to each
student. How many apples are required? */

#include<stdio.h>
main(){
	int st;
	
	printf("\t Enter how many students are there? :");
	scanf("%d",&st);
	printf("\n\t There are %d students are available",st);
	printf("\n\t So,You have required %d apples",5*st);
}
