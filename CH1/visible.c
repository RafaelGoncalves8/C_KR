#include <stdio.h>
//make tabs, backslashes and backspaces characters visible
int c;
void main() {
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
        }
        else if (c == '\\') {
            printf("\\\\");
        }
        else if (c == '\b') {
            printf("\\b");
        }
        else {
            putchar(c);
        }
    }
}


