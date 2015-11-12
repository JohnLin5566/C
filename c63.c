//*square
#include<stdio.h>
int square(int side);
int main()
{
	int side;
	scanf("%d", &side);
	square(side);

	return 0;
}
int square(int side)
{
	int i, j;
	for	(i=1; i<=side; i++)
	{
		for	(j=1; j<=side; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
