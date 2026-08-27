#include <stdio.h>

unsigned char switch_byte(unsigned char x) {
    unsigned char x1 = x << 4;
    unsigned char x2 = x >> 4;
    return x1 | x2;
}

unsigned char rotate_left(unsigned char x, int n){
    if(n <=0 || n >= 8)
        return x;
    unsigned char x1 = x << n;
    unsigned char x2 = x >> (8-n);
    return x1 | x2;
}

int main() {
    unsigned char a = switch_byte(0xAB);
    printf("3.a) = 0x%02x\n", a);

    printf("3.b) = 0x%08b\n", rotate_left(0x61, 1));
    printf("3.b) = 0x%08b\n", rotate_left(0x61, 2));
    printf("3.b) = 0x%08b\n", rotate_left(0x61, 7));
    return 0;
}