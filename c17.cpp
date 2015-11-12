#include<stdio.h>
int main()
{
	int x;

	for (x=1; x<=10;x++)
	{
		if (x==5)
		{
		continue;
		}
	printf("%d", x);
	}
	
	printf("\ncontinue program ended successfully\n");
	return 0;
}
