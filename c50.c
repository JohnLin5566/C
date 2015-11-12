#include<stdio.h>
#include<math.h>
//enter a number ,and program will to determin this number is prime or not
int main()
{
	int x;

	printf("enter a number to determine is a pirme or not\n");
	while	(scanf("%d",&x) != EOF)
	{
		isprime(x);
	}
}
int isprime(int x)
{
	int i ;

	for	(i=2; i<=sqrt(x); i++)
	{
		if	(x % i ==0)
		return printf("%d is not a prime.\n", x);
	}
	return printf("%d is a prime.\n", x);
}
