//take sum of net number

#include<stdio.h>
int main()
{
	int i,j,sum=0;
	
	printf("Please enter any number : ");
	scanf("%d", &j);
	
	for(i=1;i<=j;i++)
	{
		printf("%d\n",i);
		sum+=i;
	}
	
	//Sum of all numbers
	
	 printf("Sum of all numbers is : %d",sum);

	return 0;
}
