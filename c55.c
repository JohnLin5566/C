#include<stdio.h>
int CheckDigits(int n);
int main()
{
	int n;
	while(scanf("%d", &n) != EOF)
	{
		printf("%d\n", CheckDigits(n));
	}
	return 0;
}
int CheckDigits(int n)
{
	int a, b, sum1, sum2;
	a = n % 10;
	b = (n / 10) % 10;
	sum2 = sum1 = a + b;
	n = n / 10;
	while	(n > 10 && sum1 == sum2)
	{
		a = n % 10;
		b = (n / 10) % 10;
		sum2 = a + b;
		n = n / 10;
	}
	if	(sum1 != sum2)	return 0;
	if	(sum1 == sum2)	return sum2;
}

