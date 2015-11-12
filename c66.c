//Roll a die 6000 times
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int roll_die(int times);
int main()
{
	int x;

	printf("How many times you want to test ?\n");
	scanf("%d", &x);
	roll_die(x);

	return 0;
}
int roll_die(int times)
{
	int fre[6] = {0};
	int i, j, face;
	double r01;
	srand( (unsigned) time (NULL) );

	for	(i=1; i<=times; i++)
	{	
		r01 = (double) (rand() / (RAND_MAX + 1.0));
		face =(int) ( r01 * (7.0 - 1.0) + 1.0);
		printf("%d", face);
		
		//printf("%d", face= (rand() % 6 +1) );
		switch(face)
		{
			case 1:
			++fre[0]; break;
			case 2:
			++fre[1]; break;
			case 3:
			++fre[2]; break;
			case 4:
			++fre[3]; break;
			case 5:
			++fre[4]; break;
			case 6:
			++fre[5]; break;
		}
	}

	printf("%s%13s\n", "Face", "Frequency");
	
	for	(i=0; i<=5; i++)
	{
		printf("  %d%13d\n", i+1, fre[i]);
	}
	return 0;
}
