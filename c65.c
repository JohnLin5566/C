//Find the greatest common divisor(GCD) of the two integers
#include<stdio.h>
int GCD(int num1, int num2);
int main()
{
	int num1, num2;
	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("GCD is ");
	printf("\b\b = %d\n",GCD(num1, num2) );

	return 0;

}
int GCD(int num1, int num2)
{
	int i, min, answer=1;
	min=num1;
	if	(num1 > num2)
	{
		min=num2;
	}
	for	(i=2; i<=min; i++)
	{
		while	(num1 % i == 0 && num2 % i == 0)
		{
				
			printf("%d * ", i);
			num1=num1/i;
			num2=num2/i;
			answer = answer * i;	
		}
		/*
		if	(num1 % i == 0 && num2 % i == 0)
		{
			answer = i;
		}
		*/
	}
	return answer;
}
