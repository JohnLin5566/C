#include<stdio.h>
int main()
{
	int num[10];	
	int i, max, min;

	for(i=0; i<10; i++)
	{
	printf("enter the number of the number %d:", i+1);
	scanf("%d", &num[i]);
	}
	
	max=num[0];
	min=num[0];

	for(i=0; i<10; i++)
	{
		if (num[i]> max)
		{
		max=num[i];
		}
		if (num[i]< min)
		{
		min=num[i];
		}
	
	}

	printf("max:%d\tmin:%d\n", max, min);
}
