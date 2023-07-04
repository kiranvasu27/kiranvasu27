#include<stdio.h>

union Car{
	int model_id;
	char name[20];
	float weight;
};

struct Student{
	int id;
	char name[20]="ABC";
	float height=6.2;
};

int main()
{
	Student s1;
	Car c1;
	
	printf("=====Difference between union and stucture====\n\n");
	
	printf("Size of stucture : %d",sizeof(s1));
	printf("\nSize of union : %d",sizeof(c1));
	
	return 0;
}
