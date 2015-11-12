#include<stdio.h>
int main()
{
	int n=0, i;

	while( scanf("%d", &n) != EOF)
	//many time scanf nutil you enter the ctrl+z to end the file
	{
		for( i=0; i<=n; i++)
		{
		printf("%d\n", i );
		}
	}

	return 0;
}
