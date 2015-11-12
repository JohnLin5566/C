#include<stdio.h>
int main()
{
	int passes = 0;
	int failures = 0;
	int student =0;
	int result;
	
	printf("enter 1 to pass or 2 to fail , or -1 to end:");
	scanf("%d", &result);

	if(result == 1){
	passes+=passes;
	student+=student;
	printf("enter 1 to pass or 2 to fail , or -1 to end:");
	scanf("%d", &result);
	}

	else if (result == 2){
	failures+=failures;
	student+=student;
	printf("enter 1 to pass or 2 to fail , or -1 to end:");
	scanf("%d", &result);
	}

	else if (result == -1){
	printf("passed: %d\n failed: %d\n student: %d\n", passes, failures, student);
	}

	else {
	printf("plz enter correct number or -1 to end :D");
	printf("enter 1 to pass or 2 to fail , or -1 to end:");
	scanf("%d", &result);
	}
}
