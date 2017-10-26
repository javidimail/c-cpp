#include <stdio.h>

char *myrepeatlist(char r)
{
	int i;
	static char mylist[32]; // mylsit should be static. Function returns the address of mylist but the content will be lost if we use non static variable.

	for(i=0;i<32;i++)
	{
		mylist[i] = r;
//		printf("%d",mylist[i]);
	}
	return mylist;
}

int main()
{
	char c;
	printf("please enter a character: ");
	scanf("%c",&c);
	printf("%s\n",myrepeatlist(c));
	return 0;
}
