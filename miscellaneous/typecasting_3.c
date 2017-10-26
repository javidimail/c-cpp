#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

int x;
int *y;

srand((unsigned)time(NULL)); //unsigned cast operator
x = rand();

printf("%d is a random number.\n",x);

y = (int *)malloc(1000*(sizeof(int)));

printf("size of y is %d.\n", sizeof(*y));

}
