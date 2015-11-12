//integerPower
#include<stdio.h>
int integerPower(int x, int y);
int main()
{
	int base, exponent;
	printf("enter a base integer\n");
	scanf("%d", &base);
	printf("enter a exponent integer\n");
	scanf("%d", &exponent);

	printf("integerPower is %d\n", integerPower(base, exponent));
	return 0;
}
int integerPower(int x, int y)
{
	int i, answer=1;
	for	(i=1; i <= y; i++)
	{
		answer = answer * x;
	}
	return answer;
}
