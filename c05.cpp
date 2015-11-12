#include<stdio.h>
#include<math.h>
int main(){

	int i, j ;
	int power;
	int answer;

	for (i=1; i<=10; i++)	{

	for (j=0; j<=3; j++)	{
	power= (int) pow(10, j);
	answer=i*power;
	printf("%d\t", answer);
	}

	printf("\n");
	}
	return 0;
}
