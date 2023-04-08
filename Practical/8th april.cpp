#include<stdio.h>
main()
{
	int row[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter your values %d%d :",i,j);
		scanf("%d" ,&row[i][j]);	
		}
		
		
	}
	
	
		for (i=0;i<3;i++)
   {
	for(j=0;j<3;j++)
	{
		printf("%d \t",row[i][j]);
	}
	printf("\n");
  }

	
}

