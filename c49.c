#include<stdio.h>
#include<math.h>
//determine the number is prime or not
//gcc -lm c49.c -o c49, need to add "-lm" to link the lib
int main()
{
	int i, j, num, prime;

	for	(num = 2; num < 100; num++)
	{
		prime = 1;
		for	(i = 2; i <= sqrt(num); i++)
		{
			if	(num % i == 0)
			{
				prime =0;
				break;
			}
		}
		if	(prime ==1)
		{
			printf("%d is prime.\n", num);
		}
	}
	return 0;
}
