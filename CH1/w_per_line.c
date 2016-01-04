#include <stdio.h>

// Program to count WORDS (anything between blanks
//                         tabs or newlines)

#define IN  1 //inside a WORD
#define OUT 0 //outside a WORD

void main() {
    int c, nl, nW, nc, state;

    state = OUT;
    nl = nW = nc = 0;

    while ((c=getchar()) != EOF) {
        putchar(c);
        ++nc;
        if (c=='\n')
            ++nl;
        if (c==' ' || c == '\n' || c == '\t') {
            state = OUT;
            putchar('\n');
    }
        else if (state == OUT) {
            state = IN;
            ++nW;
        }
    }
}
