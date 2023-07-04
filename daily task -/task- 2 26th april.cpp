//YOUR INFORMATION 

#include<stdio.h>

main()
{
	int ch1[25],ch2[25],ch3[25],ch4[25],ch5[25];
	
	printf("Enter your name : ");
	scanf("%s",ch1);
	
	printf("Enter your last name : ");
	scanf("%s",ch2);
	
	printf("Enter your Email address : ");
	scanf("%s",ch3);
	
	printf("Enter your Zip Code : ");
	scanf("%s",ch4);
	
	printf("Enter your mobile number : ");
	scanf("%s",ch5);
	
	printf("\n=====YOUR INFORMATION=====\n");
	
	printf ("your name is %s\n",ch1);
	printf ("your last name is %s\n",ch2);
	printf ("your Email address %s\n",ch3);
	printf ("your Zip code is %s\n",ch4);
	printf ("your mobile number is %s\n",ch5);
}
