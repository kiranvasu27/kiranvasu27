/*
   Structure in C:
   
   "It is a user defined data type in C language"
   
   "It can hold multiple type of data variable at a time and also can retrive all of them at a time"
   
   Syntax :
   
   struct structure_name{
      data_type
   };

*/

#include<stdio.h>

struct Person{
	char country[20];
};

struct Student{
	
	Person p1;
	
	int id;
	char name[20]="ABC";
	float height=6.2;
};

int main()
{
	Student s1;
	
	printf("\n\n=======Student data=======\n\n");
	
	printf("Enter id : ");
	scanf("%d",&s1.id);
	
	printf("Your Id : %d",s1.name);
	printf("\nName : %s\n",s1.name);
	
	printf("Enter country : ");
	scanf("%s",&s1.p1.country);
	
	printf("Your Country : %s",s1.p1.country);
	
	return 0;
}
