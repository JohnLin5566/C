#include<stdio.h>
#include<time.h>	//struct timespec
//As use the gcc need to link with "-lrt"
int Combination1(int n, int k);
int Combination2(int n, int k);
int Factorial(int x);
int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	Combination1(n, k);
	Combination2(n, k);
	return 0;
}
int Factorial(int x)
{
	int f=1;
	int i;
	for	(i=2; i<=x; i++)
	{
		f = f * i;
	}
	return f;

}
int Combination1(int n, int k)
{
	int c;
	struct timespec t11, t12;
	
	clock_gettime(CLOCK_REALTIME, &t11);
	c = Factorial(n)/( Factorial(k) * Factorial(n - k) );
	clock_gettime(CLOCK_REALTIME, &t12);

	printf("combination1 is %d, and it is cost %ld clicks\n", c, t12.tv_nsec-t11.tv_nsec);
	printf("%ld", t11.tv_nsec);

}
int Combination2(int n, int k)
{
	int c, i;
	int up = 1;
	struct timespec	t21, t22;
	
	clock_gettime(CLOCK_REALTIME, &t21);
	for	(i=n; i > (n-k); i--)
	{
		up = up * i;
	}
	c = up / Factorial(k);
	clock_gettime(CLOCK_REALTIME, &t22);

	printf("combination2 is %d, and it is cost %ld clicks\n", c, t22.tv_nsec-t21.tv_nsec);
}
