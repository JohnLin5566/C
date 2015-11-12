#include<stdio.h>
int main()
{
	int grade;
	int aCount = 0;
	int bCount = 0;
	int cCount = 0;

	printf("enter the letter grades.\n");
	printf("enter the eof to end input.\n");

	while ((grade=getchar()) != EOF)

	{
		switch(grade)
		{
			case 'A':
			case 'a':
			++aCount;
			break;

			case 'B':
			case 'b':
			++bCount;
			break;

			case 'C':
			case 'c':
			++cCount;
			break;

			case '\n':
			case '\t':
			case ' ':
			break;
		
			default:
			printf("incorrect letter .");
			printf("enter a new grade.\n");
			break;
		}
	}
	
	printf("\nTotals for each letter grade are:\n");
	printf("A: %d\n", aCount);
	printf("B: %d\n", bCount);
	printf("C: %d\n", cCount);

	return 0;
}
