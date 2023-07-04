//WAP Find out length of string without using inbuilt function

#include <stdio.h>

int main()
{
    char str[20];
	int len=0,i;
	
	printf("Enter your str : ");
	gets(str); 
	
	for(i=0;str[i]!='\0';i++)
	{
		len+=1;
	}
	
	printf("Length of string is : %d",len);

    return 0;
}
