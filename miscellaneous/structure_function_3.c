#include <stdio.h>
#include <stdlib.h>

struct user {
	char name[32];
	int age;
};

struct user *allocateStructure(void);
void fillStructure(struct user *u);
void showStructure(struct user *u);

int main()
{
	struct user *newuser;
	newuser = allocateStructure();
 	fillStructure(newuser);
	showStructure(newuser);
	return(0);
		
} 

struct user *allocateStructure(void)
{
	struct user *newuser;
	newuser = (struct user *)malloc(sizeof(struct user));
 	return(newuser);
}

void fillStructure(struct user *u)
{
	puts("please enter your name first: \n");
	scanf("%s",u->name);
	puts("please enter yuour age now: \n");
	scanf("%d",&u->age);
	printf("Thanks! \n"); 
}

void showStructure(struct user *u)
{

	printf("you name is %s and you are %d years old! \n", u->name, u->age);
}
