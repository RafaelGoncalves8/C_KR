/* Write the function strindex(s,t) which returns the position of the rightmost */
/* occurrence of t in s , or -1 if there is none. */

#define MAX 15

#include <stdio.h>
#include <string.h>

int strindex(char s[], char t){
    int i;
    for (i = strlen(s); i > 0; i--)
        if (s[i] == t)
            return i;
    return -1;
}

int main(void){
    char str[MAX] = "Ola como vai?";
    int i;
    for (i = 0; str[i] != '\0'; i++)
        printf("%c", str[i]);
    printf("\n%d\n", strindex(str, 'v'));
    return 0;
}


    

