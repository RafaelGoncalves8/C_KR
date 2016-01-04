#include <stdio.h>

void main()
{
    int c, spaces = 0, spc = 0;

    while ((c=getchar()) != EOF) {
        if (c != ' '){
            putchar(c);
        }
        else {
            while (c == ' ') {
                spaces++;
                c = getchar();
            }
            putchar(' ');
            putchar(c);
        }
    }
    printf("%d\n", spaces);
}

    
