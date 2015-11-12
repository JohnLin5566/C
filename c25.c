#include<stdio.h>
int main()
{
	int x=0;

	scanf("%d", &x);
	for( ; x>=0 ; printf("%d\n", x--) );

	return 0;
}
