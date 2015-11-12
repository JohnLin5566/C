//Passing arrays and individual array elements to functions
#include<stdio.h>
#define SIZE 5
//parameter of modifyArray are array and interge.The array dont need to give a magnitude
void modifyArray( int b[], int size );
void modifyElement( int e );
int main()
{
	int a[SIZE] = {0, 1, 2, 3, 4};
	int i;
	printf("Effects of passing entire array by reference:\n\n"
	"The values of the original array are:\n");
	
	//output original array
	for	(i=0; i<SIZE; i++)
	{
		printf("%3d", a[i]);
	}
	
	printf("\n");
	//pass array a to modifyArray by reference
	modifyArray( a, SIZE);
	printf("The values of the modified array are:\n");

	//output modified array
	for	(i=0; i<SIZE; i++)
	{
		printf("%3d", a[i]);
	}

	//output value of a[3]
	printf("\n\nEffects of passing array elementby value:\n\n"
	"The value of a[3] is %d\n", a[3]);
	//pass array element a[3] by value
	modifyElement(a[3]);
	//output value of a[3]
	printf("The Value of a[3] is %d\n", a[3]);

	return 0;
}
//The function will read array automatically. And runing with size.
void modifyArray( int b[], int size )
{
	int j;
	for	(j=0; j<size; j++)
	{
		b[j] = b[j] * 2;
	}
}
void modifyElement( int e )
{
	printf("Value in modifyElement is %d\n", e = e * 2);
}

