//constant variable
#include<stdio.h>
#include<stdlib.h>
int main()
{	
	//use a const variable to control length of array
	const int n=5;
	int A[n];
	int i;

	for	(i=0; i<n; i++)
	{
		scanf("%d", &A[i]);
	}
	int sum = 0;

	for	(i=0; i<n; i++)
	{
		printf("%d\n", A[i]);
		sum += A[i];
	}

	printf("%d\n", sum);
	//change the data type of n from integer to double
	double rN=n;
	double avg=sum/rN;

	printf("%f\n", avg);
}
