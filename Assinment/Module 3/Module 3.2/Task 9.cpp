//WAP to find fibonacci series

#include<stdio.h>

int main()
{
	int i,n,x=0,y=1,z;
	
	printf("Enter a number of term for fibonacci series : ");
	scanf("%d",&n);
	
	printf("\nThe series of fibonaci is : %d %d",x,y);
	for(i=1;i<=n-2;i++)
	{
		z=x+y;
		x=y;
		y=z;
		
		printf(" %d",z);
	}
	
	return 0;
}
