#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//the better method to get the dice number
//1.[0, 1)
//2.[1, 7)
//3.double > int
int main()
{
	int result;
	double r01, r17;

	//random seed
	srand( (unsigned) time (NULL) );

	while	(getchar() != EOF)
	{
		//[0, 1)
		r01 = (double) ( rand() / (RAND_MAX + 1.0) );
		//[1, 7) , like a dice
		r17 = r01 * (7.0 - 1.0) + 1.0;
		//output
		result = (int) (r17);
		printf("dice number is : %d", result);
	}
	return 0;
}
