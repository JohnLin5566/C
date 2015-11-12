//example of local_static
#include<stdio.h>
#include<stdlib.h>
void fun1();
int times = 1;			//global

int main(int argc, char * argv[])
{
	for	(times=1; times <=5; times++)
	{
		fun1();
	}
	printf("\n");
	return 0;
}
void fun1()
{
	int a_var = 10;		
	//auto variable, the value was reseted when access the function
	
	static int l_stat = 10;	
	//local static variable, the value "was added 1" when access the function
	
	printf("\n %d. a_var1=%d l_stat=%d \n", times, a_var++, l_stat++);
}
//The static variables will keep the value after leaving the valid range
//till the program is over.
//This static variables be disposed a fixed memoery at the "compiling time".
//But the auto variables be disposed a memoery at the "running time".
