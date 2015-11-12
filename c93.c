/* Copying a string using array notation and pointer notation */
#include<stdio.h>
void copy1( char * const s1, const char * const s2 );
void copy2( char *s1, const char *s2);
int main()
{
	char str1[10];	char *str2 = "Hello";
	char str3[10];	char str4[] = "Good Bye";

	/*The value of '\0' is 00 that equal the value of null */
	printf("str2[5] is %d\n", str2[5]);
	printf("null is %d\n", '\0');
	printf("(str1[5] = str2[5]) != '\\0' is %d\n", (str1[5] = str2[5]) != '\0');

	copy1( str1, str2);
	printf("string1 = %s\n", str1);
	copy2( str3, str4);
	printf("string3 = %s\n", str3);
	return 0;
}
void copy1( char * const s1, const char * const s2 )
{
	int i ;
	for (i=0; (s1[i] = s2[i]) != '\0'; i++)
	{
		; /* do nothing in body */	
	}
}
void copy2( char *s1, const char *s2)
{
	for (; (*s1 = *s2) != '\0'; s1++, s2++)
	{
		;
	}
}
