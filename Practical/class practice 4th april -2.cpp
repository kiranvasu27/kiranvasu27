//Without argumnetnand without return type

#include<stdio.h>
void sum();
main()
{
	printf("This is your addition \n");
	sum();
}

void sum()
{
	int a,b;
	printf("Enter your numbers : ");
	scanf("%d%d",&a,&b);
	printf("Addition %d",a+b);
}
