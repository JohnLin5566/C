#include<stdio.h>
	char *func();	/*declaration*/
int main()			
{
	char *text1;
	text1= func();
	printf("%s\n",text1);
}

char *func()
{
	static char text2[10]="martin";
	return (text2);
}
