#include <stdio.h>

int *myprimelist(void)
{
	int i;
	static int mylist[5] = {2,3,5,7,11};
	return mylist;

}

int main()
{
	int i;
	int *array;
	array = myprimelist();
	for(i=0;i<5;i++)
		printf("%d\n",array[i]);

	return(0);

}
