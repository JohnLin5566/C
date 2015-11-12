#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i, j, num, keynum;
	srand( (unsigned)time(NULL));
	num = (rand() % 100) + 1;

	printf("It is a game of guess number, plz enter how many time you need to guess?\n");
	printf("(HINT: the range of number is from 1 to 100!)\n");
	scanf("%d", &j);
	printf("ok!, now, you have %d time to guess, and guess now!\n", j);

	for	(i=1; i<=j; i++)
	{
	scanf("%d", &keynum);
	if	(keynum != num)
		{
			printf("wrong answer!, guess it again!\n");
			continue;
		}
	else if	(keynum == num)
		{
			printf("BINGO!\n");
			break;
		}
	}
	printf("the answer is :%d\n", num);
	return 0;
}
