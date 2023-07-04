//print table upto user input

#include<stdio.h>
int main()
{
	int i,j,z;
	
	printf("Enter any number upto number 1 to print table : ");
	scanf("%d",&z);
	
	for(i=1;i<=z;i++)
	{
		printf("________TABLE NO: %d_________\n\n",i);
		for(j=1;j<=10;j++)
		{
			printf("%d * %d = %d",i,j,i*j);
			printf("\n");
		}
		printf("\n");
    }
	return 0;
}
