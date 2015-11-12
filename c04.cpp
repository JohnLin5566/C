#include<stdio.h>
int main() {

	int x0, x1, x2, x3;
	printf("N\t10*N\t100*N\t1000*N\n");

	for (x0=1; x0<=10 ;x0++){
	x1=10*	x0;
	x2=100*	x0;
	x3=1000*x0;
	printf("%d\t%d\t%d\t%d\t\n", x0, x1, x2, x3);
	}
}
