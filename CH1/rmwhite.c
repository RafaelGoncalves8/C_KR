#include <stdio.h>
#define MAX 1000


void rm_white(char old[], char new[]) {
    int i, j;
    i = j = 0;
    for (i=0; i < MAX; ++i) {
        if (old[i] != ' ' && old[i] != '\t' && !(old[i] == '\n' && old[i+1] == '\n')) {
            new[j] = old[i];
            ++j;
        }
    }
}

int main(void) {

    int i;
    char old[MAX];
    char new[MAX];
    
    for (i=0; i < MAX; ++i){
        old[i] = ' ';
        new[i] = ' ';
    }

    int c;
    i = 0;
    while ((c=getchar()) != EOF) {
        if (i>=MAX) {
            c = EOF;
            i = MAX+1;
        }
        old[i] = c;
        ++i;
        }
    if (i > MAX) {
        printf("limit of characters exceeded");
    } 
    rm_white(old, new);
    printf("\n----------\nWithout trailing blanks:\n");
    for (i=0; i < MAX;++i) {
        printf("%c", new[i]);
    }
    printf("\n");
    return 0;
}

