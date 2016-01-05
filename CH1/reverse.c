#include <stdio.h>
#define MAX 100

void reverse(char s[]) {
    char support[MAX];
    int i;

    for (i = 0; i<MAX-1;++i)  {
        support[i] = s[i];
                }
    for (i = 0; i<MAX;++i) {
        s[i] = support[MAX-2-i];
    }
}


void main() {
    char s[MAX];
    int c, i;
    for (i =0;i<MAX;++i)
        s[i] = ' ';
    i = 0;
    while ((c = getchar()) != EOF) {
        s[i] = c;
        ++i;
        if (c == '\n' || i>=MAX) {
            s[i] = ' ';
            reverse(s);
            for (i = 0; i<MAX;++i) {
                printf("%c", s[i]);
                s[i] = ' ';
        }
            printf("\n");
            i = 0;
        }
        
        
    }
}


