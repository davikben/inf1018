#include <ctype.h>
#include <stdio.h>

int string2num (char *s) {
  int a = 0;
  for (; *s; s++){
    a = a*10 + (*s - '0');
  }
  return a;
}

int string2num2 (char *s, int base) {
  if(base < 2 || base > 10)
    return 0;
  int a = 0;
  for (; *s; s++){
    a = a*base + (*s - '0');
  }
  return a;
}

int string2num3 (char *s, int base) {
  int a = 0;
  for (; *s; s++){
    if(isdigit(*s) == 0) { // é digito
        a = a*base + (*s - 'a' + 10);
    } else
        a = a*base + (*s - '0');
  }
  return a;
}

int main (void) {
  printf("2-a)\n");
  printf("==> %d\n", string2num("1234"));
  printf("==> %d\n", string2num("1234") + 1);
  printf("==> %d\n", string2num("1234") + string2num("1"));
  printf("\n");

  printf("2-b)\n");
  printf("==> %d\n", string2num2("10011010010", 2));
  printf("==> %d\n", string2num2("777", 8));
  printf("==> %d\n", string2num2("777", 10));
  printf("\n");
  
  printf("2-c)\n");
  printf("==> %d\n", string2num3("1a", 16));
  printf("==> %d\n", string2num3("a09b", 16));
  printf("==> %d\n", string2num3("z09b", 36));

  return 0;
}

// gcc -Wall -o dump2 string2num.c