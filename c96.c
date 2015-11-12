/* malloc() */
#include<stdio.h>
#include<stdlib.h>
int first(void);
int second(void);
int first()
{
	/* use malloc() to allocate a dynameic memory with size of integer */
	int *ptr = malloc(sizeof(int));

	printf("The memory position:%X\nThe value of the memory:%d\n", ptr, *ptr);

	*ptr=200;

	printf("If we set *ptr=200.\n");
	printf("The memory position:%X\nThe value of the memory:%d\n", ptr, *ptr);

	free(ptr);


}
int second()
{
	int m=0, n=0;
	int i, j;

	printf("enter two dimension array m*n:");
	scanf("%d\n", &m);
	scanf("%d\n", &n);

	int *ptr = malloc(m*n*sizeof(int));

	for(i=0; i<m; i++){
		for(i=j; j<n; j++){
			*( ptr + n*i + j ) = i + j;
		}
	}

	for(i=0; i<m; i++){
        	for(i=j; j<n; j++){
                	printf("%d\t", *( ptr + n*i +j ) );
	        }
	}

	free(ptr);

}
int main()
{
	first();
	second();

	return 0;
}
