#include<stdio.h>
#include<time.h>
int main()
{
	time_t now;
	struct tm first_day;
	double seconds;
	int days;

	first_day.tm_hour=0;
	first_day.tm_min=0;
	first_day.tm_sec=0;
	first_day.tm_year=113;
	first_day.tm_mon=0;
	first_day.tm_mday=4;

	time(&now);

	seconds = difftime(now, mktime(&first_day));
	days = seconds / 86400;

	printf("We are in a relationship for %d days. <3\n", days);

	return 0;
}
