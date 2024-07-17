// 30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256/-

#include<stdio.h>
main()
{
	int bill,final_bill;
	
	printf("\t Enter the Bill Amount : ");
	scanf("%d",&bill);
	
	if(bill>=800)
		final_bill = bill + (bill * 0.18);
	
	if(bill<800 && bill>=256) 
		final_bill = bill;

	if(bill<256)
		final_bill = 256;
		
	printf("\t Your final bill is : %d",final_bill);
}
