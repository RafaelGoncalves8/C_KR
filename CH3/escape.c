/* Program that converts newlines and tabs into visible escape sequences */

#include <stdio.h>
#define MAX 500

int escape(char s[], char t[]);
int unscape(char s[], char t[]);

int main(void) {
    char input[MAX];
    char output1[MAX];
    char output2[MAX];

    int i, c;

    for(i = 0; i<MAX; i++) {
        input[i] = ' ';
        output1[i] = ' ';
        output2[i] = ' ';
    }

    i = 0;

    while ((c = getchar()) != EOF && i < MAX) {
        input[i] = c;
        i++;
        }

    printf("\n---------------\n");

    for (i = 0; i<MAX;i++)
        printf("%c", input[i]);

    printf("\n---------------\n");

    escape(output1, input);
    
    for (i = 0; i<MAX;i++)
        printf("%c", output1[i]);

    printf("\n---------------\n");

    unscape(output2, output1);

    for (i = 0; i<MAX;i++)
        printf("%c", output2[i]);

    return 0;
}

int escape(char s[], char t[]) {
    int i, j = 0;
    for (i = 0; i<MAX; i++)
        switch (t[i]){
            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            default:
                s[j++] = t[i];
                break;
        }
    return 0;
    }
                
int unscape(char s[], char t[]) {
    int i, j = 0;
    for (i = 0; i<MAX; i++)
        if (t[i] == '\\')
            switch (t[++i]){
                case 't':
                    s[j++] = '\t';
                    break;
                case 'n':
                    s[j++] = '\n';
                    break;
                default:
                    s[j++] = '\\';
                    s[j++] = t[i];
            }
        else
            s[j++] = t[i];
    return 0;
}
