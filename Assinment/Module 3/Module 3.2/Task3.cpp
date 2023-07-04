//WAP to find number is even or odd using ternary operator

#include<stdio.h>  
  
int main()
{
	int n;
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("Even number");
	}
	
	else{
		printf("Odd number");
	}
	
	return 0;
}
