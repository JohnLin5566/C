#include<stdio.h>
int main()
{
	int x=0, y=0, n=0;
	scanf("%d%d", &x, &y);
	
	for(n=0; x>=y; n++)
	{
	x= x/y;
	printf("%d\n", n+1);
	}
	
	//you cant declare the variable at for loop in C but can in C++

	return 0;
}
