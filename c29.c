#include<stdio.h>
int main()
{
	int n=0;
	while (scanf("%d", &n) != EOF)
	{
	//determine how many digits the numbers have
	int m=n, k =1;
		while(m>=10)
		{
		k=k*10;
		m=m/10;
		}
	//add the every numbers of digit
	int sum=0;
		while(n>0)
		{
		int d=n/k;
		sum=sum+d;
		printf("%d", d);
		n=n%k;
		if(n>0)	printf("+");
		k=k/10;
		}
	printf("=%d\n", sum);

	return 0;
}
}
