//Average of  three months electricity bill

#include<stdio.h>

int main()
{
	int m1,m2,m3;
	
	printf("First month electricity bill : ");
	scanf("%d",&m1);
	
    printf("Second month electricity bill : ");
	scanf("%d",&m2);
	
    printf("Third month electricity bill : ");
	scanf("%d",&m3);
	
	printf("Average of three month's electricity bill is :%d ", (m1+m2+m3)/3);
	
	return 0;
}
