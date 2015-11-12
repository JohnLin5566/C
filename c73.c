//Hanoi
#include<stdio.h>
#include<stdlib.h>
void move(char x, char y);
void hanoi(int n, char one, char two, char three);
int time = 0;
int main()
{
	int m;
	printf("enter disk number\n");
	scanf("%d", &m);
	printf("the steps as following:\n");
	hanoi(m, 'A', 'B', 'C');

	return 0;
}
void move(char x, char y)
{
	printf("%d : %c > %c\n", ++time, x, y);
}

void hanoi(int n, char one, char two, char three)
{
	if	(n==1)
	{
		move(one, three);
	}
	else	
	{
		//try to think it from n=2
		//move the top one to the temporary area
		hanoi(n-1, one, three, two);	
		//move one to three
		move(one, three);
		//move the one which is in the temporary area to the target area
		hanoi(n-1, two, one, three);	
	}
}
