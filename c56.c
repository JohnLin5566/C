#include<stdio.h>
int sort_tile(int num1, int num2, int num3, int num4);
int main()
{
	int rw, rl, tw, tl;
	scanf("%d%d%d%d", &rw, &rl, &tw, &tl);
	printf("the less number is %d\n", sort_tile(rw, rl, tw, tl));
	return 0;
}
int sort_tile(int num1, int num2, int num3, int num4)
{
	int A = ( num1 / num3 ) * ( num2 / num4 );
	int B = ( num2 / num3 ) * ( num1 / num4 );
	if 	(A > B)	return B;
	if	(B > A) return A;
	if	(A = B)	return 0;
}
