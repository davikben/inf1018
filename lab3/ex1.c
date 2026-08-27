#include <stdio.h>
int main(void) {
  unsigned int x = 0x87654321;
  unsigned int y, z;

  /* o byte menos significativo de x e os outros bits em 0 */
  unsigned int bit = 0x000000FF;
  y = x & bit;
  //0x00000021

  /* o byte mais significativo com todos os bits em '1' 
     e os outros bytes com o mesmo valor dos bytes de x */
  bit = 0xFF000000;
  z = x | bit;
  //0xFF654321
  printf("y = 0x%08x\nz = 0x%08x\n", y, z);

  unsigned int a = 0x01010101;
  unsigned int b = 0x01030101;

  printf("a = 0x%08x (~a = 0x%08x)\nb = 0x%08x (~b = 0x%08x)\n", a, ~a, b, ~b);
}