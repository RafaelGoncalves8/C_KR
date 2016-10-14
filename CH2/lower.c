/* Conditional expression version of lower function */
#include <stdio.h>

char lower(char c){
    c = (c < 'Z' && c > 'A')? c += ('a'-'A') : c;
    return c;
}

int main(void){
    int i = 0;
    char c[14] = "Ola Tudo Bem?";
    while (i < 14){
        printf("%c", lower(c[i]));
        i++;
    }
    printf("\n");
}
