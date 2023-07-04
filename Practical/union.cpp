/*
  Union : "Also user defined Data type in C "
  
  It can also hold multiple type of data variable at a time but can retrive only one of them at a time

*/

#include<stdio.h>

union Car{
	int model_id;
	char name[20];
	float weight;
};

int main()
{
	Car c1;
	
	printf("Enter model id : ");
	scanf("%d",&c1.name);
	
	printf("Enter name : ");
	scanf("%s",&c1.name);
	
	printf("Id : %d",c1.model_id);
	printf("\nName : %s",c1.name);
	
	return 0;
}
