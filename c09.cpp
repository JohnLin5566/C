#include<stdio.h>
#include<math.h>
int main(){
	
	int n , counter, x;
	double e0=1;
	double pi =1;
	double x_p;
	
	printf("x is :");
	scanf("%d", &x);

	printf("how many times:");
	scanf("%d", &counter);

	for(n=1; n<=counter; n++){
	pi=pi*n;
	x_p=pow(x,n);
	e0=e0+(x_p/pi);
	
	printf("pi is%f\tx_p is%f\n", pi, x_p);
	}
	printf("%f\n", e0);

	return 0;
}
