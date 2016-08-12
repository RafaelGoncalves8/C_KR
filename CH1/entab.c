/* Make a program that converts spaces in tabs
 * using tab as a charactere between every 'n' columns
 * in this case each column has 8 spaces
 */

#include <stdio.h>
#define TABW 8
#define MAX 1000

void entab(char input[], char output[]) {
    int i, n, j, spc;
    n = 0;
    j = 0;
    spc = 0;


    for (i=0; i<MAX;++i) {
        
        if (n>=TABW) 
            n = n-TABW;

        if (i == ' ') {
            ++spc;
        }
        else if (spc == 0) {
            output[j]=input[i];
            ++j;
        
            if (input[i]=='\n' || input[i]=='\t'){
                n = 0;
            }
            else ++n;
        }
        else {
            while (spc >= TABW-n) {
                output[j] = '\t';
                ++j;
                spc = spc-(TABW-n);
                n = 0;
            }
            for (spc; spc>0;--spc){
                output[j] = ' ';
                ++j;
                ++n;
            }
            output[j] = input[i];
            ++j;
            if (input[i]=='\n' || input[i]=='\t'){
                n = 0;
            }
            else ++n;
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
    entab(input, output);
    printf("\n-------------\n");
    for (i = 0; i<MAX; ++i)
        printf("%c", output[i]);
    printf("\n");
}
