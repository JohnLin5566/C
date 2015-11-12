//Recursive factorial function
#include<stdio.h>
long factorial(long number);
//you dont need to set a "long number" before this function
int main()
{
	int i, num;
	printf("How many factorial you want to calculate ?\n");
	scanf("%d", &num);
	for	(i=0; i<=num; i++)
	{
		printf("%10d! = %ld\n", i, factorial(i)); 
	}
}
long factorial(long number)
{
	if	(number<=1)
	{
		return 1;
	}
	else	
	{
		return (number * factorial(number -1 ));
	}
}
//start from 0 to num
//0!=1
//1!=1
//2!=2*1!
//3!=3*2!
//4!=4*3!
