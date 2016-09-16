/* Program that implements the loop without using && or ||
 * for(i=0; i<lim-1 && (c=getchar()) != '\n' c != EOF; ++i)
 *     s[i] = c;  */
#include <stdio.h>
#define lim 1000
int c, i;
char s[lim];

void main() {
    for (i=0; i < lim-1; i++) {
        c = getchar();
        if (c == '\n')
            break;
        else if (c == EOF)
            break;
        else
            continue;
        s[i] = c;
    }
}
