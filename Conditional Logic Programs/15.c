/* 15.Write a C program to determine eligibility for admission to a professional
   course based on the following criteria
   Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
   in Chem>=50 and Total in all three subject >=190 or Total in Maths and
   Physics >=140 --------------------------------------Input the marks obtained in
   Physics :65 Input the marks obtained in Chemistry :51 Input the marks
   obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
   188 Total marks of Maths and Physics : 137 The candidate is not eligible. */
   
#include<stdio.h>
main()
{
	int maths, phy, chem, Total, mp;
	
	printf("\t Enter maths marks : ");
	scanf("%d",&maths);
	
	printf("\t Enter phy marks : ");
	scanf("%d",&phy);
	
	printf("\t Enter chem marks : ");
	scanf("%d",&chem);
	
	mp = maths + phy;
	
	Total = maths + phy + chem;
	
	// Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50
	if(maths >=65 && phy >=55 && chem >= 50 && mp >= 120 && Total >= 170)
	{
		printf("\n\t %d The candidate is eligible for admission",Total);
	}
	else
	{
		printf("\n\t %d The candidate is not eligible for admission",Total);
	}
}
	
	
	
	
	
	
