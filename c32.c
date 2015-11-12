#include<stdio.h>
int main()
{
	int n=0;
	int DigitalSum(int n);	//declaration the function at the first
	//the error will happen if we dont declare the function in C++ 
	//but not in C
	
	void	printN(int );
	//declare a function cant return any number, but can replace printf function
	void	printHello();
	//even the parameter without any thing ,still need a parentheses

	while (scanf("%d", &n) != EOF)
	{
	//printf("=%d\n", DigitalSum(n));
	//printf function was replaced by printN();
	
	printN(DigitalSum(n));
	printHello();
	return 0;
	}
}

void printN(int x)	//give the definition
{
	printf("=%d\n", x);
}
void printHello()
{
	printf("Hello\n");
}

int DigitalSum (int n)
{
	//determine how many digitals the numbers have
	int m=n, k =1;
		while(m>=10)
		{
		k=k*10;
		m=m/10;
		}
	//add the every numbers of digital
	int sum=0;
		while(n>0)
		{
		int d=n/k;
		sum=sum+d;
		printf("%d", d);
		n=n%k;
		if(n>0)	printf("+");
		k=k/10;
		}
	return sum;
}

