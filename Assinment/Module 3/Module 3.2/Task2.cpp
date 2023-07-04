/* 
  WAP to swap two numbers without using third variable
*/

#include<stdio.h>
int main()
{
	int num1,num2;
	
	printf("Please enter your first value : ");
	scanf("%d",&num1);
	
	printf("Please enter your second value : ");
	scanf("%d",&num2);
	
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	
	printf("\n\nAfter swapping your first value is : %d",num1);
	printf("\nAfter swapping your second value is : %d",num2);
	
	return 0;
}


