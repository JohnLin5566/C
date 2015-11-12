#include<stdio.h>
#include<time.h>
int main()
{
	time_t rawtime;
	struct tm * timeinfo;
	int year, month, day;
	const char* weekday[]={"sunday", "monday", "tuesday", "wednesday"
	, "thursday", "firday", "saturday"};

	//get the data from user//
	printf("enter year");
	fflush(stdout);
	scanf("%d", &year);

	printf("enter month");
	fflush(stdout);
	scanf("%d", &month);

	printf("enter day");
	fflush(stdout);
	scanf("%d", &day);


