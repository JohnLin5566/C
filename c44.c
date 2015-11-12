#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//try to use better method to get the random values in some range like [0, 1)
//and control idiot XD
int main()
{
	srand((unsigned)time(NULL));
	printf("use the formula : (double) rand() / (RAND_MAX + 1.0)\n");
	printf("we get the range in [0, 1) , %f\n", (double) rand() / (RAND_MAX + 1.0) );

	printf("so, if we want to create a range like [low, up)\n");
	printf("we can use formula : (low~up distance) * ( [1, 0) random value) * (low)\n");

	double up, low, rndf, result;

	printf("plz, enter up and low :\n");
	scanf("%f\t%f\n", &up, &low);

	while	( up <= low )
	{
		printf("up must be larger than low, enter it again\n");
		printf("plz, enter up and low : \n");
		scanf("%f\t%f\n", &up, &low);

		if	(up >= low)
		{
			break;
		}
	}

	result = (up - low ) * rand() / (RAND_MAX + 1.0) + low;
	return 0;	
}
