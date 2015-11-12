#include<stdio.h>
int main(){

	int n;
	int pi=1 ;

	scanf("%d", &n);

	for(n; n>1; n--){
	pi*=n;
	}
	printf("pi is %d\n", pi);
	
	
	return 0;
	}
