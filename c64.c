//Find the factors of the number
#include<stdio.h>
int factor(int num);
int main()
{
	int num;
	scanf("%d", &num);
	factor(num);

	return 0;
}
int factor(int num)
{
	int i;
	printf("num = ");
	for	(i=2; i<=num; i++)
	{
		while	(num % i ==0)
		{
			printf("%d * ", i);
			num = num / i;
		}
	}
	printf("\b\b \n");
	return 0;
}
