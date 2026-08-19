#include <ctype.h>
#include <stdio.h>

int dump (void *p, int n) {
    unsigned char *p1 = p;
    return *p1;
}

int is_little(){
    int t = 1;
    int d = dump(&t, sizeof(t));
    if(d == 210)
        return 1;
    return 0;
}

void num2string(char *s, int num, int base){

}

int main(){
    is_little();
    return 0;
}