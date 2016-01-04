#include <stdio.h>

void main()
{
    long tabs=0, newline=0, blanks=0, bs =0;
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ') ++blanks;
        if (c == '\t') ++tabs;
        if (c == '\n') ++newline;
        if (c == '\b') ++bs;
    }

printf("\nblanks = %3ld, tabs = %3ld, lines = %3ld, backspaces = %3ld\n\n", blanks, tabs, newline, bs);
}    



