//Write a program make a summation of given number 

#include<stdio.h>
int main()
{
	int num,i,a;
	int sum=0;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	
	for(i=1;num>0;i++)
	{
		a = num % 10;
		sum+=a;
		num = num / 10;
	}
	printf("The summation of digits are : %d",sum);
	return 0;
}
