#include<stdio.h>
int main()
{
	int n=0;
	int DigitalSum(int n);	//declaration the function at the first
	//the error will happen if we dont declare the function in C++ 
	//but not in C
	while (scanf("%d", &n) != EOF)
	printf("=%d\n", DigitalSum(n));	//give the function a bracket
	return 0;
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

