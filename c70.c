//Roll a die 6000 times with array
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 7			//convenient to define the frequency
int main()
{
	int face, roll;
	int frequency[SIZE] = {0};

	srand((unsigned)time(NULL));

	for	(roll=1; roll<=6000; roll++)	//roll 6000 times
	{
		face = rand() % 6 + 1;
		++frequency[face];
	}

	printf("%s%17s\n", "Face", "Frequency");

	for	(face =1; face < SIZE; face++)
	{
		printf("%4d%17d\n", face, frequency[face]);
	}

	return 0;
}
