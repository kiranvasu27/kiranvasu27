#include<stdio.h>
main()
{
	int col[3][3],row[3][3],row2[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter your values %d%d :",i,j);
			scanf("%d",&row[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
		printf("Enter your values %d%d :",i,j);
		scanf("%d",&col[i][j]);
	}
		printf("\n");
	}
	printf("-----------Matrix----------- \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",row[i][j]);
		}
		printf("\n");
	}
	printf("-----------Matrix 2----------- \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",col[i][j]);
		}
		printf("\n");
	}
	printf("-----------Matrix 3----------- \n");
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			row2[i][j]=row[i][j]*col[i][j];
			printf("%d \t",row2[i][j]);
		}
		printf("\n");
	}
}
