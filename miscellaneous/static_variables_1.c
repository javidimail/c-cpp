#include <stdio.h>

void myfunction(void)
{

 	int x = 0; // this value will be set every time you call the function
	static int y = 0; //Once x is initialized its initial value will be zero, but after that the program keeps the most recent value of x
	printf("Here is the value of variable x: %d and static varible y: %d\n",x,y);
	x++;
	y++;
	printf("Here is the value of variable x: %d and static variable y: %d\n",x,y);

}

int main()
{
	myfunction();
	myfunction();
	return(0);
}
