/* Make a program that converts tab in spaces
 * using tab as a charactere between every 'n' columns
 * in this case each column has 8 spaces
 */

#include <stdio.h>
#define TABW 8
#define MAX 1000

void detab(char input[], char output[]) {
    int i, n, j;
    n = 0;
    j = 0;

    for (i=0; i<MAX;++i) {
        if (n<TABW)
            n = n;
        else n = n-TABW;
    
        if (input[i] !='\t' && input[i] != '\n') {
            output[j] = input[i];
            ++j;
            ++n;
        }
        else if (input[i]== '\t') {
            for (n; n<8;++n) {
                output[j] = ' ';
                ++j;
            }
            n = 0;
        }
        else {
            output[j] = input[i];
            ++j;
            n = 0;
        }
    }
}
            
void main() { 
    char input[MAX];
    char output[MAX];
    int i, c;

    for (i=0;i<MAX;++i)
        input[i] = output[i] = ' ';
    i = 0;

    while ((c=getchar()) != EOF && i<MAX) {
        input[i] = c;
        ++i;
    }
    detab(input, output);
    printf("\n-------------\n");
    for (i = 0; i<MAX; ++i)
        printf("%c", output[i]);
    printf("\n");
}
