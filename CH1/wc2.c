#include <stdio.h>

// Program to count WORDS (anything between blanks
//                         tabs or newlines)
// and does not begin with a number or special char

#define IN  1 //inside a WORD
#define OUT 0 //outside a WORD

void main() {
    int c, nl, nW, nc, state;

    state = OUT;
    nl = nW = nc = 0;

    while ((c=getchar()) != EOF) {
        ++nc;
        if (c=='\n')
            ++nl;
        if (c==' ' || c == '\n' || c == '\t' || c == '-')
            state = OUT;
        else if (state == OUT) { 
            if ( 'a' <= c <= 'z' || 'A' <= c <= 'Z') {
                ++nW;
            }
            state = IN;
        }

    }
    printf("lines: %d WORDS: %d characteres: %d\n", nl, nW, nc);
}
