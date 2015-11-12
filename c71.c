//Three arrays with different length use pointer
#include<stdio.h>

	int tab1[] = {1, 2, 3, 4, 5};
	int tab2[] = {2, 4, 6};
	int tab3[] = {3, 6, 9, 12};

	int *tabs[] = {tab1, tab2, tab3};
	int tabSize[] = {5, 3, 4};
int main()
{
	int i, j;
	for	(i=0; i<3; i++)
	{
		for	(j=0; j< tabSize[i]; j++)
		{
			printf("%d", tabs[i][j]);
		}
		printf("\n");
	}
	return 0;
}
