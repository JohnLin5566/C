#include<stdio.h>
int main()
{
	float x=0, y=0;
	printf("enter two numbers, and get the log of the first number\n");
	printf("with the second number as base\n");
	scanf("%f%f", &x, &y);
	float n=0;
	
	while(x>=y)
	{
	x=x/y;
	n=n+1;
	}

	printf("%f\n", n);

	return 0;
}
