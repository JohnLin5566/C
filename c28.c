#include<stdio.h>
int main()
{
	int n=0, i, f=1;

	while(scanf("%d", &n) != EOF)
	{
	f=1;
		for(i=1 ; i<=n ; i++)
		{
		f*=i;
		}
	printf("f is :%d\n", f); 
	}
	return 0;
}
