/* Converts hex string to int */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAX 1000

int htoi(char input[]) {
    int num = 0, i, n=0;
    if (strlen(input)>1 && input[0] == '0' && (input[1] == 'x' || input[1] == 'X')) {
        input[1] ='0';
    }
    for (i=0; input[i] != '\0' && i < MAX && input[i] != EOF && input[i] != ' '; i++) {
        toupper(input[i]);
        if (input[i] == 'A' ||input[i] == 'B' ||input[i] == 'C' ||input[i] == 'D' ||input[i] == 'E' || input[i] == 'F')
            n = 16*n+(input[i]-'A'+11);
        else
            n = 16*n+(input[i] - '0');
    }
    return n;
}

int main(void) {
    char input[MAX+1], output[MAX+1];
    int i, c;

    for (i=0; i<MAX; i++)
        input[i] = output[i] = ' ';
    i = 0;

    while ((c=getchar()) != EOF && i<MAX) {
        input[i] = c;
        ++i;
    }
    printf("\n---------------\n");
    printf("%d", htoi(input));
    printf("\n");
}
