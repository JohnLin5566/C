/* Attempting to modify data through a non-const pointer to const data */
#include<stdio.h>
void f(const int *xPtr);
int main()
{
	int y;
	f( &y);	/* f attempts illegal modification */
	return 0;
}
void f(const int *xPtr)
{
	*xPtr = 100;
}
