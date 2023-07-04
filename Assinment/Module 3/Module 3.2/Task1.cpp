/*WAP to make simple calculator (operation include Addition, Subtraction, 
Multiplication, Divsion, modulo) */

#include<stdio.h>

int main(){
	
	int a,b,result;
	
	printf("Enter nubmer :\n");
	scanf("%d",&a);
	
	printf("Enter nubmer :\n");
	scanf("%d",&b);
	
	printf("\nYour addition is : %d",a+b);
	printf("\nYour Subtraction is : %d",a-b);
	printf("\nYour Multiplication is : %d",a*b);
	printf("\nYour Divsion is : %d",a/b);
	printf("\nYour modulo is : %d",a%b);
	
	return 0;
}

