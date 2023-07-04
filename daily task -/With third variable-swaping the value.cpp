//With third variable-swaping the value

#include<stdio.h>
int main()
{
	int n1,n2,temp;
	
	printf("Enter your first value : ");
	scanf("%d",&n1);
	
	printf("Enter your second value : ");
	scanf("%d",&n2);
	
	temp=n1;
	n1=n2;
	n2=temp;
	
    printf("\n\nAfter swapping your first value is : %d",n1);
	printf("\nAfter swapping your second value is : %d",n2);

	return 0;
}

