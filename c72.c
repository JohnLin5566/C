//HomeWork 5.29, make sure the answer is right or not
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int answer, x;
	int num1, num2;
	int i, j;

	srand((unsigned) time(NULL));
	num1 = rand() % 10 + 1;
	num2 = rand() % 10 + 1;

	answer = num1 * num2;
	printf("How much is %d * %d = ??\n", num1, num2);

	while	(1)
	{
		scanf("%d", &x);
		if	(answer == x)
		{
			i = rand() % 4 + 1;
			switch(i)
			{
				case 1:
				printf("Very good\n");
				break;
				case 2:
				printf("Excellent!\n");
				break;
				case 3:
				printf("Nice work\n");
				break;
				case 4:
				printf("Keep up the good work\n");
				break;

			}	//end switch i
			break;
		}		//end if
		else
		{

			j = rand() % 4 + 1;
			switch(j)
			{
				case 1:
				printf("plz, try it again\n");
				break;
				case 2:
				printf("Wrong, try once more\n");
				break;
				case 3:
				printf("Dont give up!\n");
				break;
				case 4:
				printf("No, keep trying\n");
				break;
			}		//end switch j
		}			//end else
	}				//end while
	return 0;
}
