//The topic of survey data analysis.
//It computes the mean, median and mode of the data
#include<stdio.h>
#define SIZE 99
void mean(const int answer[]);
void median(int answer[]);
void mode(int freq[], const int answer[]);
void bubbleSort(int a[]);
void printArray(const int a[]);

int main()
{
	int frequency[10] ={0};
	int response[SIZE]=
	{6,2,1,5,7,4,3,1,5,9,
	5,3,7,7,4,7,9,4,2,1,
	4,6,9,8,6,4,1,3,5,6,
	1,2,4,6,8,9,9,8,7,6,
	1,2,3,4,5,6,8,7,9,5,
	3,1,4,2,5,3,4,2,1,2,
	3,6,8,6,9,8,4,3,7,5,
	1,2,3,4,5,6,8,7,9,5,
	3,1,4,2,5,3,4,2,1,2,
	3,6,8,6,9,8,4,3,7,5};

	mean(response);
	median(response);
	mode(frequency, response);
	return 0;
}
void mean(const int answer[])
{
	int j;
	int total=0;
	printf("%s\n%s\n%s\n", "********", "  Mean", "********" );

	for	(j=0; j<SIZE; j++)
	{
		total+=answer[j];
	}
	printf("The mean value for this run is :%d/%d =%.4f
	\n\n", total, SIZE, (double)total/SIZE);
}
void median(int answer[])
{
	printf("\n%s\n%s\n%s\n%s", "********", "  Median", "********", 
	"The unsordted array of responses is");

	printArray(anwser);
	bubbleSort(answer);
	printf("\n\nThe sorted array is");
	printArray(answer);

	printf(
}

