/* Pettern 3

         *
       * * *
     * * * * *
   * * * * * * *
 * * * * * * * * * 


*/

#include<stdio.h>

int main()
{
	int n=5;
	int i,j,k;
	int nst=1;
	
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=nst;j++)
		{
			printf("*");
		}
		
		nst = nst + 2;
		printf("\n");
	}	
	return 0;
}
