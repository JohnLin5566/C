/* Printing a string one char at atime */
#include<stdio.h>
void printCharacters( const char *sPtr );
int main()
{
	/* initialize char array */
	char string[] = "printf character of a string";

	printf( "The string is :\n" );
	printCharacters ( string );
	printf( "\n" );
}
void printCharacters ( const char *sPtr )
{
	/* loop through entire string */
	for (; *sPtr != '\0'; sPtr++)
	/* no initialization */
	{
		printf("%c", *sPtr);
	}
}
