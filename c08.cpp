#include<stdio.h>
int main(){

	int n , counter;
	float e0=1;
	float pi =1;

	printf("how many times:");
	scanf("%d", &counter);

	for(n=1; n<=counter; n++){
	pi=pi*n;
	e0=e0+1/pi;
	}

	
	printf("%f\n", e0);

	return 0; 
}
