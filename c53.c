//example of externl variable
#include<stdio.h>
#include<stdlib.h>
void fun1();
void fun2();
int main()
{
	extern int i;		//declare the external variable
	printf("==> in main() i=%d\n", i++);
	fun1();
	fun2();
	return 0;
}
void fun1()
{
	extern int i;
	printf("==> in fun1() i=%d\n", i++);
}
int i = 10;			//declare the global variable
void fun2()
{
	printf("==> in fun2() i=%d\n", i);
}
//In the main function, we want to use "the external int i = 10".
//Beacuse, we declare "the int i = 10" after the main and fun1 function.
//But in the fun2, the declaration of "the int i = 10" was befor the fun2.
//so we dont need to declare the "extern int = 10" in the fun2 function.
