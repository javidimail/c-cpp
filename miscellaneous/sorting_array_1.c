#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main()
{
	int numbers[SIZE];
	int x, i, j, temp;

// Populate the array
	srand((unsigned)time(NULL));
	printf(" Here is the seed value: %d \n",(unsigned)time(NULL));
	for(x=0;x<SIZE;x++)
		numbers[x] = rand() * 100 + 1;

// Display the array
	puts("Here is the array with random content:");
	for(x=0;x<SIZE;x++)
		printf(" %3d", numbers[x]);
	putchar('\n');

/* Sort Here */
	for(i=0;i<SIZE;i++)
	{
		for(j=i;j<SIZE;j++)
		{
			if( numbers[j] < numbers[i] )
			{
				temp = numbers[j];
				numbers[j] = numbers[i];
				numbers[i] = temp;
				
			}

		}
	}

/* Display the sored array here */
	puts("Here is the sored array");
	for(x=0;x<SIZE;x++)
		printf(" %d", numbers[x]);
	putchar('\n');

	return(0);

}
