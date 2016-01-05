#include <stdio.h>
#define MAXLINE 50

int get_line(char line[], int maxline);
void copy(char from[], char to[]);

int main(void)
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(line, longest);
        }
    }
    if (max > 0 && max < 50)
        printf("\n%s", longest);
    else if (max > 0)
        printf("\n%s... (%d)\n", longest, max);
    return 0;
}

int get_line(char line[], int lim) {
    int c, i;
    for (i=0; (c=getchar())!= EOF && c!='\n'; ++i)
        if (i < lim -1)
            line[i] = c;
    if (c == '\n') {
            line[i] = c;
        ++i;
    }
    return i;
}

void copy(char from[], char to[]) {
    int i;
    i  = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

