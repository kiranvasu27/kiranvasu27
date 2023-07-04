//Write a program to find out the max from given number 

#include<stdio.h>
int main()
{
	int num,i,a;
	int max=0;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	
	for(i=1;num>0;i++)
	{
		a = num % 10;
		if(a>max)
		{
			max=a;
		}
		num = num / 10;
	}
	printf("The maximum number is : %d",max);
	
	return 0;
}
