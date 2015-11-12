#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int dice, rand_dice;
	
	srand( (unsigned) time (NULL) );
	while	( getcher() != EOF)
	{
		printf("dice number is : %d\n", rand_dice);
	}
	return 0;
}

int rand_dice(int dice)
{
	double r01, r17;

	r01 = (double) ( rand() / (RAND_MAX + 1.0) );
	//[1, 7) , like a dice
	r17 = r01 * (7.0 - 1.0) + 1.0;
	//output
	dice = (int) (r17);

	return dice;
}
