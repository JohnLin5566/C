#include<stdio.h>
#include<time.h>
#include<stdlib.h> 
//1. we try to find the RAND_MAX 
//2. coding a program to simulate a dice
int main()
{
	printf("the RAND_MAX in gcc compiler is :%d\n", RAND_MAX);
	//use the formula "rand() % (up - low + 1) + low" to create 
	//the random number in the range is [low, up]

	int i, num;
	srand( (unsigned)time(NULL));
	//create a random number is like a dice
	
	for	(i=0; i<10; i++)
	{
		num = rand() % 6 + 1;
		printf("%d\t", num);
	}
	printf("\n");
	return 0;
}
