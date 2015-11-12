#include<stdio.h>
int main()
{
	int day, month=2;
	int i, j, k;

	printf("sun\tmon\ttue\twed\tthu\tfri\tsat\n");
	
	for	(j=0; j<53; j++)
	{
		for	(i=1; i<=7; i++)
		{
			day=i+7*j;
			printf("%d\t", day=i+7*j);
			/*
			if	(month == 1 && day < 32)
			{
			printf("%d\t", day=i+7*j);
			}
			if	(month == 2 && day >= 32 && day < 61)
			{
			printf("%d\t", day=((i+7*j)-31));
			}
			*/
		}
	printf("\n");
	}
	return 0;
}
