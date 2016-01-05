#include <stdio.h>

int power(int m, int n);
//raises m to n

int main(void) {
    int i;
    printf("n %6s %6s\n", "2^n", "(-3)^n");
    printf("---------------\n");
    for (i = 0; i<10; ++i)
        printf("%d %6d %6d\n", i, power(2,i), power(-3,i));
    return 0;
}

int power(int m, int n) {
    int  p;
    for (p=1;n >0; --n)
        p = p*m;
    return p;
}
