/* programa 3*/
#include <stdio.h>

int main (void) {
  int x = 0xffffffff;
  unsigned int y = 2;
  printf("int x = %d \nunsigned int y = %d\n", x, y);
  printf("x é menor do que y? %s\n", (x<y)?"sim":"nao");
  return 0;
}

// gcc -Wall -o ex4c ex4c.c