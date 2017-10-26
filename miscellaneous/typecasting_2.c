#include <stdio.h>
#include <math.h> //Compile with -lm 

int main()
{
  int x;
  float xroot;

  printf("please enter an integer:");
  scanf("%d",&x);
  xroot = sqrt(abs(x));
  printf("x is %d and xsquared is %f\n",x,xroot);

  return(0);
}
