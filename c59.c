//Recursive fibonacci function and detect the spend time
#include<time.h>		//clock_gettime(linked with "-lrt")
#include<stdio.h>
long Fibonacii(long n);
int main()
{
	long reslut, num;
	struct timespec t1, t2;

	printf("enter a integer\n");
	scanf("%ld", &num);
	
	//Timing start
	clock_gettime(CLOCK_REALTIME, &t1);
	reslut = Fibonacii(num);
	//Timing end
	clock_gettime(CLOCK_REALTIME, &t2);

	printf("Fibonacii(%ld) = %ld\n", num, reslut);
	printf("The system spend %ld nanosec to calculating it\n", t2.tv_nsec - t1.tv_nsec);

	return 0;
}
long Fibonacii(long n)
{
	if	(n==0 || n==1)
	{
		return n;
	}
	else	
	{
		return Fibonacii(n-1) + Fibonacii(n-2);
	}
}
