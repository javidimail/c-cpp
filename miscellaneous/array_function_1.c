#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int *generate(void);

int main()
{
	int i;
	int *a;
	
	puts("here you go! 10 random numbers:");
	a = generate();
	for(i=0;i<10;i++)
		printf(" %3d", a[i]);
	putchar('\n');

	return(0);
}

int *generate(void)
{
	static int array[10];
	int x;
	
	srand((unsigned)time(NULL));
	for(x=0;x<10;x++)
		array[x] = rand() % 100 + 1;

	return(array);
}
