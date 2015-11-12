/* bubbleSort with method that is call-by-reference */
#include<stdio.h>
#define SIZE 10
/* the memory location of array is const, and change the value with 
 * bubbleSort, the * const array means the *array is not fixed, but
 * the address of array is fixed , so cannot assign new address */
void bubbleSort(int * const array, const int size );
int main()
{
	int a[SIZE] = {2, 6, 23, 12, 34, 12, 21, 4, 10, 1};
	int i ;
	
	printf("Data items in origianl order\n");
	/* loop through array a */
	for (i=0; i<SIZE; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
	
	bubbleSort(a, SIZE);
	
	printf("Data items in ascending order\n");
	/* loop through new array a */
	for (i=0; i<SIZE; i++)
	{       
	        printf("%4d", a[i]);
	}
	printf("\n");
	
	return 0;
}
void bubbleSort(int * const array, const int size)
{
	void swap( int *element1Ptr, int *element2Ptr);
	int pass , j;	/* pass and comparison counter */

	for (pass = 0; pass <size -1; pass++)
	{
		for (j = 0; j<size-1; j++)
		{
			if (array[j] > array[j+1])
			{
				swap( &array[j], &array[j+1]);
			} /* end for if */
		} /* end for comparison loop */
	} /* end for pass loop */
}/* end for function bubbleSort */
/* swap value at memory locations to element1Ptr and element2Ptr point */
void swap( int *element1Ptr, int *element2Ptr)
{
	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}
