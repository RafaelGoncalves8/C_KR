#include <stdio.h>

// Program to count WORDS (anything between blanks
//                         tabs or newlines)

#define IN  1 //inside a WORD
#define OUT 0 //outside a WORD

void main() {
    int c, state, i;
    int word[17];
    int len[18];
    
    len[0] = '[';
    for (i = 1; i<17; ++i)
        len[i]=' ';
    len[17] = ']';

    for (i = 0; i<16; ++i)
        word[i] = ' ';
    word[16] = '|';

    state = OUT;
    nl = nW = nc = 0;

    while ((c=getchar()) != EOF) {
        if (c==' ' || c == '\n' || c == '\t') {
            
            for (i = 1; i<n; ++i)
                len[i]='#';
            state = OUT;
            print("%d, %d", word[], len[]);
            putchar('\n');
            n = 0;
    }
        else if (state == OUT) {
            word[n] = c;
            state = IN;
            ++n;
        }
        else ++n;


    }
}
