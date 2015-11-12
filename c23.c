#include<stdio.h>
int main()
{
	int n =0, s=0, i=0;
	scanf("%d", &n);

	for(i=0;i<=n;++i){
	s=s+i;
	}
	
	/*
	while(n!=0){
	s=s+n;
	n=n-1;
	}

	do{
	s=s+n;
	n=n-1;
	} while(n!=0);
	*/

	printf("%d\n", s);
}

