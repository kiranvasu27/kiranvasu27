/*
   pettern_3_reserve
   
   * * * * *
	  * * * *  
	    * * *
	      * *
	        *
*/

#include<stdio.h>

int main()
{
	int i,j,z;
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=(5-1);j++)
		{
			printf(" ");
		}
		for(z=1;z<=i;z++)
		{
			printf(" * ");
		}
		
		printf("\n");
	}
	
	return 0;
}
