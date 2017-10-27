#include <stdio.h>

#define SIZE 20

//void showArray(int *a);

void showArray(int *a)
{
        int i;
        for(i=0;i<SIZE;i++)
                printf(" %d", a[i]);
        putchar('\n');
}

int main()
{
	int numbers[SIZE] = {44,10,88,0,99,1,22,33,4,2,4,5,6,2,1,88,6,43,24,23};
	int i, j, temp;
	
	puts("Intitial array:");
	showArray(numbers);

// Sort here
	for(i=0;i<SIZE;i++)
	{
		for(j=i+1;j<SIZE;j++)
		{
			if( numbers[j] < numbers[i] )
			{
				temp = numbers[j];
				numbers[j] = numbers[i];
				numbers[i] = temp;
				printf("i and j: %2d and %2d :",i,j);
				showArray(numbers);	
			}
		}
	}
/* Display the sorted version here */
	puts("Here is the sorted version");
	showArray(numbers);

	return(0);
}

/*
void showArray(int *a)
{
	int i;
	for(i=0;i<SIZE;i++)
		printf(" %d", a[i]);
	putchar('\n');
}
*/
