//Sum of odd and even numbers

#include<stdio.h>
int main()
{
	int i,j,num,even=0,odd=0,sumofeven=0,sumofodd=0;
	
	printf("Enter any number : ");
	scanf("%d",&j);
	
	for(i=1;i<=j;i++)
	{
		printf("Enter your %d value : ",i);
		scanf("%d",&num);
		
		if(num % 2==0)
		{
			even++;
			sumofeven+=num;
		}
		else
		{
			odd++;
			sumofodd+=num;
		}
	}
	
		printf("\n Total count of even number = %d \n",even);
		printf("\n Total count of odd number = %d \n",odd);
		printf("\n Total sum of even number = %d \n",sumofeven);
		printf("\n Total sum of odd number = %d \n",sumofodd);
	
	return 0;
}
