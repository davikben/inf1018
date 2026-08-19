#include <stdio.h>

void dump (void *p, int n);

int main (void) {
  int i = 10000;
  long int l = 10000;
  short int s = 10000;
  char a = 'a';
  char a2 = 97;
  char p[] = "davi";
  char p2[] = "A \n$";

  printf("int i:\n");
  dump(&i, sizeof(i));

  printf("long int l:\n");
  dump(&l, sizeof(l));

  printf("short int s:\n");
  dump(&s, sizeof(s));

  printf("char a:\n");
  dump(&a, sizeof(a));

  printf("char a2:\n");
  dump(&a2, sizeof(a2));

  printf("char p[]:\n");
  dump(p, sizeof(p));

  printf("char p2[]:\n");
  dump(p2, sizeof(p2));
  return 0;
}

// gcc -Wall -o dump1 dump.c main.c