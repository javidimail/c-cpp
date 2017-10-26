#include <stdio.h>

int main() {

  int x,y;
  float z;

  x = 13; y = 3;
  z = x/y;
  printf("%d/%d = %.5f\n",x,y,z);

  z = (float)x/y;
  printf("%d/%d = %.5f\n",x,y,z);
  
}
