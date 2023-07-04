//Write program to make an addition of two number using pointer

#include<stdio.h>

//function defination and decalaration
int sum(int *a,int *b)
{
	return (*a)+(*b);
}
int main()
{
	int a,b,addition;
	
	printf("Enter first number : ");
	scanf("%d",&a);
	
	printf("Enter second number : ");
	scanf("%d",&b);
	
	//function calling
	addition = sum(&a,&b);
	
	printf("Addition of two number is : %d",addition);
	
	return 0;
}
