//take sum of user input

#include<stdio.h>
int main()
{
	int i,j,sum=0;
	for(i=1;i<=5;i++)
	{
		printf("Please Enter any %d number : ",i);
		scanf("%d",&j);
		sum+=j;
	}
	
	 printf("Sum of all numbers : %d",sum);
	
	return 0;
}
