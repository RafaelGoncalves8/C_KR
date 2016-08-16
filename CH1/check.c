/* Program to check basic syntaxes of other C programs */

#include <stdio.h>
#define MAX 1000

int unmatched(char input[]) {
    int i, e1 = 0, e2 = 0, e3 = 0; //(; [; {
    for (i = 0; i<MAX; i++) {
        if (input[i] == '(') e1++;
        else if (input[i] == '[') e2++;
        else if (input[i] == '{') e3++;
        else if (input[i] == ')') e1--;
        else if (input[i] == ']') e2--;
        else if (input[i] == '}') e3--;
    }
    if (e1 != 0 || e2 != 0 || e3 != 0) return 1;
    else return 0;
}

int quotes(char input[]) {
    int i, sing = 0, doub = 0;
    for (i = 0; i<MAX; i++) {
        if (input[i] == '\'') sing++;
        else if (input[i] == '"') doub++;
    }
    if (sing % 2 != 0 || doub % 2 != 0) return 1;
    else return 0;
}
    
int comments(char input[]) {
    int i, flag = 0, flag1 = 0, comm = 0;
    for (i = 0; i<MAX; i++) {
        if (input[i] == '/') flag = 1;
        else if (input[i] == '*' && flag == 1) {
        comm++; 
        flag = 0;
        }
        else if (input[i] == '*' && comm == 1) flag1 = 1;
        else if (input[i] == '/' && flag1 == 1) {
        comm--;
        flag1 = 0;
        }
    }
    if (comm != 0) return 1;
    else return 0;
    }
    

int check(char input[], char output[]) {
    int err = 0;
    if (unmatched(input)) {
       err = 1;
       printf("UnmatchedError\n");
    }
    if (quotes(input)) {
       err = 1;
       printf("QuotesError\n");
    }
    if (comments(input)) {
       err = 1;
       printf("CommentsError\n");
    }
    if (err == 0) {
        printf("No syntaxes errors");
    }

}

void main() {
    char input[MAX];
    char output[MAX];
    int i, c;

    for (i=0; i<MAX; i++)
        input[i] = output[i] = ' ';
    i = 0;

    while ((c = getchar()) != EOF && i < MAX) {
        input[i] = c;
        i++;
    }

    printf("\n---------------\n");
    check(input, output);
    printf("\n");
}

  
