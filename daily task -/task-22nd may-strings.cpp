//Pelidrom

#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];
	int size=0;
	int a=0;
	int i,j;
	char temp;
	
	printf("Enter a string: ");
	scanf("%s",str);
	
	//size_of_string
	
	while(str[a]!='\0')
	{
		size++;
		a++;
	}
	
	for(i=0,j=size-1;i<=j;i++,j--)
	{
		temp = str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	
	if(str[i]==str[j])
	{
		printf("Pelidrom");
	}
	else
	{
		printf("Not Pelidrom");
	}
	
	return 0;
}
