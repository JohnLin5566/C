#include<stdio.h>
int main()
{
	int sum =0;
	int number;
	
	for (number=0;number<=100;number=number+2){
	sum=sum+number;
	}

	printf("sum is %d\n", sum);

	return 0;

}
