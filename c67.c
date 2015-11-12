#include<stdio.h>
#define  SIZE  5		//define the size of array
int main()
{
	int i;			//counter
	int n[SIZE] = {0};
	
	printf("i, n[i]\n");
	
	for	(i=0; i<SIZE+50; i++)
	{
		printf("%d, %d\n", i, n[i]);
		//check n[i] in different PC, and find the answer about random
	}

	for	(i=0; i<SIZE; i++)	//calculate the array first
	{
		n[i]=2+2*i;
	}

	for	(i=0; i<SIZE; i++)	//output after calculating
	{
		printf("%d, %d\n", i, n[i]);
	}
}
