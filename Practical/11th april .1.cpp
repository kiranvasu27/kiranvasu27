#include<stdio.h>
main()
{
	int num[5]={1,2,3,4,5};
	printf("%d,",num[0]);
	printf("%d,",++num[0]);
	printf("%d,",++num[0]);
	printf("%d,",++num[0]);
	printf("%d,",++num[0]);
	printf("%d,",++num[6]);
}
