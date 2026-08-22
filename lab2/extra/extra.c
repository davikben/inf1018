#include <ctype.h>
#include <stdio.h>

int dump (void *p) {
    unsigned char *p1 = p;
    return *p1;
}

int is_little(){
    int t = 1234;
    int d = dump(&t);
    if(d == 210)
        return 1;
    return 0;
}

void num2string(char *s, int num, int base){
    int n = 1;
    int i = 0;
    while(num > n){
        n = n * base;
    }
    n = n / base;
    while(n > 0){
        int d = num / n;
        char c;
        if(d >= 10)
            c = (d - 10) + 'a';
        else
            c = d + '0';
        s[i] = c;
        i++;
        num = num % n;
        n = n / base;
    }
    s[i] = '\0';
}

int main(){
    int result = is_little();
    printf("is little: %d\n", result);
    char s[81];
    num2string(s, 511, 8);
    printf("r: %s\n", s);

    num2string(s, 1633295, 36);
    printf("r: %s\n", s);
    return 0;
}