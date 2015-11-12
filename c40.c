#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i;
	int a;
	unsigned int seed;	
	//create a data type is postive, so use "unsigned" to qualify int
	seed = (unsigned)time(NULL);
	//set a random seed for srand()
	srand(seed);

	for	(i=0; i<5; i++)
	{
		a=(rand() % 100 ) +1;
		printf("the random number is : %d\n", a);
	}

	return 0;
}
