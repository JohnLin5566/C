//malloc example:random string generator
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, n;
	char * buffer;

	printf("How long the string?\n");
	scanf("%d", &i);

	buffer = (char*)  malloc (i+1);
	if	(buffer == NULL) exit (1);

	for	(n=0; n<i; n++)
	{
		buffer[n]=rand()%26+'a';
		buffer[i]='\0';
	}
	printf("string : %s\n", buffer);
	free(buffer);

	return 0;
}
