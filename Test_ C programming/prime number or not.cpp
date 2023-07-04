//WAP to find that the number is prime number or not

#include <stdio.h>

int main()
{
  int n, i, a = 0;
  printf("Enter a any number : ");
  scanf("%d", &n);

  for (i = 2; i <= n / 2; ++i)
   {
      if (n % i == 0)
	   {
         a = 1;
         break;
       }
   }

  if (n == 0 || n == 1) 
  {
  	printf("This is natural number");
  }
  else if (a == 0)
  {
  	printf("This is a prime number.", n);
  }
  else
  {
  	printf("This is not a prime number.", n);
  }

  return 0;
}
