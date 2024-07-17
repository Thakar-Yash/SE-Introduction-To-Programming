// 4. WAP to find factorial using recursion

int factorial(int n)
{
	if(n == 0 || n == 1)
		return 1;
	else
		return n * factorial(n-1);
}

main()
{
	int num;
	printf("\t Enter number to get Factorial : ");
	scanf("%d",&num);
	
	if(num<0)
		printf("\t Factorial is not defined for negative numbers.");
	else
		printf("\n\t The Factorial of %d is %d",num, factorial(num));
}
