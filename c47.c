#include<stdio.h>
#include<time.h>
int main()
{
	//how many seconds pass through from 1970/1/1 00:00
	//the data type must be set as time_t ,cant be int or anything
	time_t t1;
	//A pointer to a tm structure, it is " struct tm "
	struct tm * timeinfo;

	t1 = time (NULL);
	timeinfo = localtime (&t1);

	printf("It is pass through %d sec after 1970/1/1\n", t1);
	printf("current local time and date : %s\n", asctime(timeinfo));
	
	return 0;
}
