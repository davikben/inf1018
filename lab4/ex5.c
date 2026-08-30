#include <stdio.h>

void dump (void *p, int n) {
  unsigned char *p1 = p;
  while (n--) {
    printf("%p - %02x\n", p1, *p1);
    p1++;
  }
}

int main (void) {
  signed char sc = -1;
  unsigned int ui = sc;
  printf("signed char sc = %i \nunsigned k = %u \n", sc, ui);
  printf("dump de l: \n");
  dump(&sc, sizeof(sc));
  printf("\n");
  printf("dump de k: \n");
  dump(&ui, sizeof(ui));
  return 0;
}

// gcc -Wall -o ex5 ex5.c