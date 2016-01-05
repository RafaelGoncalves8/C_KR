#include <stdio.h>

// Program to count WORDS (anything between blanks
//                         tabs or newlines)

#define IN  1 //inside a WORD
#define OUT 0 //outside a WORD

void main() {
    int c, state, i, n, s;
    int word[17];
    int len[19];

    s = 16;
    n = 0;
    
    len[0] = '[';
    for (i = 1; i<18; ++i)
        len[i]=' ';
    len[18] = ']';

    for (i = 0; i<16; ++i)
        word[i] = ' ';
    word[16] = '|';

    state = OUT;

    while ((c=getchar()) != EOF) {
        if (c==' ' || c == '\n' || c == '\t') {
            for (s ; s > 0; --s)
                putchar(' ');
            for (i = 1; i<=n && i < 18; ++i)
                len[i]='#';
            state = OUT;
            printf(" | ");
            for (i = 0; i < 19; ++i)
                printf("%c", len[i]);
            putchar('\n');
            n = 0;
            s = 16;
            for (i = 1; i<18; ++i)
                len[i]=' ';
            
    }
        else if (state == OUT) {
            putchar(c);
            state = IN;
            ++n;
            --s;
        }
        else {
            putchar(c); 
            ++n;
            --s;
        }


    }
}
