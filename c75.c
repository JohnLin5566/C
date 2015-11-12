//Static arrays are initialized to zero
#include<stdio.h>
void staticArrayInit();
void automaticArrayInit();
int main()
{
	printf("First call\n");
	staticArrayInit();
	automaticArrayInit();
	printf("\n");

	printf("Second call\n");
	staticArrayInit();
	automaticArrayInit();
	printf("\n");

	return 0;
}
void staticArrayInit()
{
	static int array1[3];
	int i;
	
	printf("\nValues on entering staticArrayInit:\n");
	
	for	(i=0; i<=2; i++)
	{
		printf("array1[%d] =%d ", i, array1[i]);
	}
	printf("\nValues on exiting staticArrayInit:\n");
	
	for	(i=0; i<=2; i++)
	{
		printf("array1[ %d] = %d ", i, array1[i]+=5);
	}
}
void automaticArrayInit()
{
	static int array2[3];
	int i;
	
	printf("\nValues on entering automaticArrayInit:\n");
	
	for     (i=0; i<=2; i++)
	{
	        printf("array1[%d] =%d ", i, array2[i]);
	}       
	printf("\nValues on exiting automaticArrayInit:\n");

	for     (i=0; i<=2; i++)
	{
	        printf("array1[ %d] = %d ", i, array2[i]+=5);
	}
}

