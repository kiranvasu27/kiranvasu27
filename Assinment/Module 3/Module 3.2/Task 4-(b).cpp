//Monday to Sunday using switch case

#include<stdio.h>

int main()
{
	char c;
	
	printf("Enter any Number : ");
	scanf("%c",&c);
	
	switch(c){
		case '1':
			printf("Monday");
			break;
			
		case '2':
			printf("Tuesday");
			break;	
			
		case '3':
			printf("Wednesday");
			break;
		
		case '4':
			printf("Thursday");
			break;	
			
		case '5':
			printf("Friday");
			break;
		
		case '6':
			printf("Saturday");
			break;	
				
		case '7':
			printf("Sunday");
			break;
			
		
		default:
		   printf("Invalid Output");			
	}
	
	return 0;
}
