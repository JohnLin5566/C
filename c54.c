//A scoping example
#include<stdio.h>

void useLocal();
void useStaticLocal();
void useGlobal();

int x = 1;
int main()
{
	int x = 5;		//local variable to main
	printf("local x in outer scope of main is %d\n", x);
	{
				//start new scope
		int x = 7;	//local variable to new main
		printf("local x in inner scope of main is %d\n", x);
	}

	printf("local x in outer scope of main is %d\n", x);

	useLocal();		//auto local x
	useStaticLocal();	//static local x
	useGlobal();		//global x
	useLocal();		//reinitializes auto local x
	useStaticLocal();	//static local x retains its prior value
	useGlobal();		//gobal x also reatins its value

	printf("\nlocal x in main is %d\n", x);
	return 0;
}
void useLocal()
{
	int x = 25;
	printf("\nlocal  in useLocal is %d after entering useLocal\n", x);
	x++;
	printf("local x in useLocal is %d befor exiting useLocal\n", x);
}
void useStaticLocal()
{
	static int x = 50;
	printf("\nlocal static x is %d on entering useStaticLocal\n", x);
	x++;
	printf("local static x is %d on exiting useStaticLocal\n", x);
}
void useGlobal()
{
	printf("\nglobal x is %d on entering useGlobal\n", x);
	x *= 10;
	printf("global x is %d on exiting useGlobal\n", x);
}











