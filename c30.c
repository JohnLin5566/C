#include<stdio.h>
int main( void )
{
	int MyF(int); // declaration
	int x = 0;
	printf("%d\n", MyF(x));
	return 0;
}

int MyF(int n)	//Function definition
//return type + function name + (parameters);
{
	return n+1;
}

//it is better declaration the function first and give 
//the function  definition later
