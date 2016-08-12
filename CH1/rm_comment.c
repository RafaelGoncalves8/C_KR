/* Make a program that removes all comments */

#include <stdio.h>
#define MAX 1000

void rm_comment(char input[], char output[]) {
    int i, j, comm, flag;
    flag = 0;
    comm = 0;
    j = 0;
    for (i=0; i<MAX; i++) {
        if (input[i] =='/' && comm == 0) {
            comm = 1;
            output[j] = input[i];
            j++;
        }

        else if (comm == 1 &&  input[i] == '/') {
            comm = 11;
            j--;
        }

        else if (input[i] == '*' && comm == 1) {
            comm = 22;
            j--;
        }
        else if (comm == 0 || comm == 1 ||(comm == 11 && input[i] == '\n')) {
            output[j] = input[i];
            comm = 0;
            j++;
            }

        else if (comm == 22 && input[i] == '*') {
            flag = 1;
        }
        else if (flag == 1 && input[i] == '/') {
            comm = 0;
            j--;
            }
        else {}
    }
}


void main() {
    char input[MAX];
    char output[MAX];
    int i, c;

    for (i=0;i<MAX;i++)
        input[i] = output[i] = ' ';
    i = 0;

    while ((c = getchar()) != EOF && i<MAX) {
        input[i] = c;
        i++;
    }

    rm_comment(input, output);
    printf("\n---------------\n");
    for (i = 0; i<MAX; i++)
        printf("%c", output[i]);
    printf("\n");
}
