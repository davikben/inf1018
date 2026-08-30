/* programa 2*/
#include <stdio.h>

int main (void) {
  unsigned int x = 0xffffffff;
  unsigned int y = 2;
  printf("unsigned int x = %d \nunsigned int y = %d\n", x, y);
  printf("x é menor do que y? %s\n", (x<y)?"sim":"nao");
  return 0;
}

// gcc -Wall -o ex4b ex4b.c