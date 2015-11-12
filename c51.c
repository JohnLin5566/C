//Finding the maximun of three integers
#include<stdio.h>
int maximum(int x, int y, int z);	//function prototype
int main()
{
	int num1, num2, num3;

	printf("enter three integers:");
	scanf("%d%d%d", &num1, &num2, &num3);

	printf("maximun is :%d\n", maximun(num1, num2, num3));

	return 0;
}
int maximun(int x, int y, int z)
{
	int max = x;

	if	(y > max)	max = y;
	if	(z > max)	max = z;

	return max;
}
