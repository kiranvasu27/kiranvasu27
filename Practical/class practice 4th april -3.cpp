//With argument and without return type

#include<stdio.h>
void sum(int,int );
main()
{
	int a,b;
// printf("This is your addition\n");	
	printf("This is your addition \n");
	printf("Enter your numbers : ");
	scanf("%d%d",&a,&b);
	sum(a,b);
}

void sum(int a,int b)
{
	printf("Addition %d",a+b);
}
