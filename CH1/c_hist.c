#include <stdio.h>
#define MAXOCURR 99
// will try to make a vertical histogram but with this
// i will only count digits and letters because of my
// knowledge at the moment

void main() {

    int hist[62][MAXOCURR+1];
    int i, c, j;
    
    for (i = 0; i<62; i++)
        for (j = 0; j <MAXOCURR; j++)
            hist[i][j] = ' ';

    for (i = 0; i<26; ++i)
        hist[i][0] = 'a'+i;
    for (i = 26; i<52; ++i)
        hist[i][0] = 'A'+(i-26);
    for (i = 52; i<62; ++i)
        hist[i][0] = '0'+(i-52);

    while ((c = getchar()) != EOF) {
        j = 0;
        for (i = 0; i < 62; ++i)
            if (c == hist[i][0]) {
                while (hist[i][j] != ' ')
                    j++;
                if (j < MAXOCURR)
                    hist[i][j] = '#';
                    }
//        putchar(c);
    }

    printf("\n----------------------\n");
    for (j = MAXOCURR; j>=0;--j) {
        for (i = 0; i < 62; ++i)
            printf("%c", hist[i][j]);
        printf("\n");
    }


}
