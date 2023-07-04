/*
  Define What is Recursive Function and
 WAP to find Factorial of number with using Recursive function
 
 Recursive function : Recursive function is itself calling again and again 
 
*/



#include<stdio.h>

//function decalaration and defination
double fact(int a)
{
	if(a==0)
	{
		return 1;
	}
		
	return a*fact(a-1);
}

int main()
{
	int n;
	 
	printf("Enter any number to find factorial : ");
	scanf("%d",&n);

	printf("The factorial of %d number is : %lf",n,fact(n));
	return 0;
}
