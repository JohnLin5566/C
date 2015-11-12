/* Using the & and * pointers */
#include<stdio.h>
int main()
{
	int a;
	int *aPtr;	
	/* set variables for a and aPtr in the memory, and aPtr is a pointer */

	a=7;
	aPtr=&a;
	/* The value of variable aPtr is the address of variable a */

	printf("the address of a is %p\nthe value of aPtr is %p\n", &a, aPtr);

	printf("the value of a is %d\nthe value of *aPtris %d\n", a, *aPtr);
	/* the star * would get the value correspond to the address */

	printf("showing tat * and & are complements of each other\n"
		"&*aPtr=%p\n*&aPtr=%p\n", &*aPtr, *&aPtr);

	return 0;
}

