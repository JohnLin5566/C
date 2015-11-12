//"Bubble sort", sorts an array's value into ascending order
#include<stdio.h>
#define SIZE 10
int main()
{
	int a[SIZE];
	int pass, i, hold;
	for	(i=0; i<SIZE; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Data items in original order\n");
	for	(i=0; i<SIZE; i++)
	{
		printf("%4d", a[i]);
	}

	for	(pass=1; pass<SIZE; pass++)
	{
		for	(i=0; i<SIZE-1; i++)
		{
			if	(a[i]>a[i+1])
			{
				hold=a[i];
				a[i]=a[i+1];
				a[i+1]=hold;
			}
		}
	}
	printf("\nData items in ascending order\n");
	for	(i=0; i<SIZE; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
	return 0;
}
