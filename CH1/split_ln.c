/* Program that wraps lines over LEN chars long */

#include <stdio.h>
#define LEN 80
#define MAX 1000

void split_ln(char input[], char output[]) {
    int j, count;
    int i=0;
    count = 0;
    for (j = 0; j < MAX; j++) {
        if (count < LEN) {
            output[j] = input[i];
            count++;
            i++;
        }
        else {
            output[j] = '\n';
            count = 0;
        }
    }
}

void main() {
    char input[MAX];
    char output[MAX];
    int i, c;

    for (i=0; i<MAX; i++)
        input[i] = output[i] = ' ';
    i = 0;

    while((c = getchar()) != EOF && i<MAX) {
        input[i] = c;
        i++;
    }

    split_ln(input, output);
    printf("\n---------------\n");
    for (i = 0; i<MAX; i++)
        printf("%c", output[i]);
    printf("\n");
}

