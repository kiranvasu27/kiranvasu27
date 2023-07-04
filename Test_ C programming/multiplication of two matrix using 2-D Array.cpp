//WAP to make multiplication of two matrix using 2-D Array

#include<stdio.h>
int main()
{
	int a[2][2];
	int b[2][2];
	int i,j,k;
	int result[2][2];
	
	//first array 
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("First array Element [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	
	//second array
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("second array Element [%d][%d] : ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n======First Araay=====\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n=====Your Second Araay=====\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			result[i][j]=0;
			for(k=0;k<2;k++)
			{
				result[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("\n=====Multiplication of two matrix=====\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d  ",result[i][j]);
		}
		printf("\n");
	}
	return 0;
}
