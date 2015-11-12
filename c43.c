#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int RunTimes = 500;	//500 times
	int SumTimes[20] = {0};	//initial values of array are zero
	int i, j, sum, rnd;

	srand( (unsigned)time(NULL) );	//random values seed

	for	(i=0; i < RunTimes; ++i)
	{
	sum = 0;
		for	(j=0; j<3; j++)
		{
			rnd = rand() % 6 + 1;
			sum = sum + rnd;
		}
		SumTimes[sum] = SumTimes[sum] + 1; 
	}
	
	sum = 0;
	for	(i=3; i<=18; i++)
	{
		printf("%d\tpoint happen %d\ttimes\n", i, SumTimes[i]);
		sum = sum + SumTimes[i];
	}
	
	printf("total is %d times\n", sum);	//make sure the total times is 500
	return 0;


}
