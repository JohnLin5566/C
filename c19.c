#include<stdio.h>
int main()
{
	int x1=0, x2=0, x3=0, x4=0, x5=0;
	int max=0, min=0;

	scanf("%d%d%d%d%d", &x1, &x2, &x3, &x4, &x5);
	
	max=x1;	
	min=x1;

	if(x2>max) max=x2;	else if(x2<min)	min=x2;
	if(x3>max) max=x3;	else if(x3<min) min=x3;
	if(x4>max) max=x4;	else if(x4<min) min=x4;
	if(x5>max) max=x5;	else if(x5<min) min=x5;

	printf("the max is : %d\n", max);
	printf("the min is : %d\n", min);

	return 0;
}
