#include <stdio.h>
#include <string.h>

/* 
Structures should be defined globally
Out of the main body of the program
*/

/* Source code is read by the compiler top-down 
So move the prototype after the definition of car structure 
*/

struct car {
  char name[16];
  int year;
  float milage;
};

void showStructure(struct car c);

int main()
{
  struct car car1;
  strcpy(car1.name,"Honda");
  car1.year = 2017;
  car1.milage = 201.1;

  showStructure(car1);

  return(0);
  
}

void showStructure(struct car mycar)
{
  printf("You car is %s made in %d and has the milage of %.1f!!! \n",
	 mycar.name, mycar.year, mycar.milage);
    
}
