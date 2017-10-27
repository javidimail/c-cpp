#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
Define structures externally (globally) at the top 
of the code. Compiler reads the code top-down! 
*/

struct car {
	char made[32];
	char model[32];
	int year;
	float milage;
};

struct car *allocateStructure(void);
void fetchStructure(struct car *c);
void showStructure(struct car *c);

int main()
{
	struct car *mynewcar;

	mynewcar = allocateStructure();
	fetchStructure(mynewcar);
	showStructure(mynewcar);
	return(0);

}

struct car *allocateStructure(void)
{
	struct car *c;
	c = (struct car *)malloc(sizeof(struct car));
	return(c);
}

void fetchStructure(struct car *c)
{
	strcpy(c->made,"Honda");
	strcpy(c->model,"Civic");
	c->year = 2017;
	c->milage =201.1;
}

void showStructure(struct car *c)
{
	printf("you car is %s %s %d with milage of %.1f miles\n",
		c->made,c->model,c->year,c->milage);
	
}
