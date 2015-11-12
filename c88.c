/* Attempting to modify a const pointer to non-const data */
#include<stdio.h>
int main()
{
	int x;	int y;
	
	/* const pointer always points to the same memory location */
	int * const ptr = &x;

	/* allowd, *ptr is not const */
	*ptr = 7 ;

	printf("x is : %d\n", x);
	
	/* this line is error, ptr is const, cannot assign now address */
//	prt = &y;


	return 0;
}
