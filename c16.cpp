#include<stdio.h>
int main()
{
	int x;

	for (x=1 ; x<=10 ; x++)
	{
		if (x==5)
		{
		break;
		}
		//if condtition is (x=5) ,just like (1), the loop only
		//run from line 6 to line11 ,and continue at line 17
		//and x is replaced by 5, so we got the number of 5 
		//on the screen
		//
		//if condition
		//ture:non-zero
		//false:zero
	printf("%d\t", x);
	}
	
	printf("\nbroke out of loop at x ==%d\n", x);

	return 0;

}

