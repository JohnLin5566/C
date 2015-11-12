#include<stdio.h>
int main()
{
	int x;
	int pi=1;
	scanf("%d", &x);

	for (x; x>1;  x--){
	pi=pi*x;
	}

	printf("pi is: %d\n", pi);
	return 0;
}
