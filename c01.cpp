#include<stdio.h>
int main()
{
	int counter=0;
	int grade;
	int total=0;
	float average;

	printf("enter garde, or -1 to end:");
	scanf("%d", &grade);

	while(grade != -1){
	total=total+grade;
	counter=counter+1;
	printf("enter garde, or -1 to end:");
	scanf("%d", &grade);
	}

	if (counter !=0){
	average=total/counter;
	printf("class average is %4.2f\n", average);
	}
	
	else{
	printf("no grades were entered\n");
	}
	
	return 0;
}
