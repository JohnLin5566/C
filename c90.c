/* Sizeof operator used on an array name returns the number of bytes in the array */
#include<stdio.h>
size_t getSize (float *ptr);
int main()
{
	float array[20];
	printf(	"The number of bytes in the array is %d\n"
		"The number of bytes returnd by getSize is %d\n", sizeof(array), getSize(array));
	return 0;
}
size_t getSize(float *ptr)
{
	/* return size of ptr */
	return sizeof(ptr);
}
