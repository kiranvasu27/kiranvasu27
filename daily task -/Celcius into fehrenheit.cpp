#include<stdio.h>
main()
{
	float temp,answer;
	
	printf("Please enter the temperature in celcius: ");
	scanf("%f" , &temp);
	
	answer = (temp * 9 / 5) + 32;
	
	printf("Answer is %f [fehrenheit]\n",answer);
	
	return 0;
}
