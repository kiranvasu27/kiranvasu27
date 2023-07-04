//WAP to find number is even or odd using ternary operator 

#include<stdio.h>

int main()
{
	int num;
	
	printf("Please enter any number : ");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("This is even number");
	}
	else 
	{
		printf("This is odd number");
	}
	return 0;
}
