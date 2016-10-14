/* expands shorthand notations like a-z in */
/* the string s1 into the equivalent complete list abc...xyz in s2 .  */
/* Allow for letters of either case */
/* and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z . */

#include <stdio.h>

void expand(char s1[],char s2[]){
    int c, i, d=0;
    for (c = 0; s1[c] != '\0'; c++){
        if (s1[c] == '-' && c == 0){
            d--;
            for (i = 0; i <= s1[c+1]; i++)
                s2[d++] = i;
            d--;}
        else if (s1[c] == '-'){
            d--;
            for (i = s1[c-1]; i<=s1[c+1]; i++)
                s2[d++] = i;
            d--;
        }
        else
            s2[d++] = s1[c];
    }
    s2[d] = '\0';
    return;
}

int main(void){
    char s1[20] = "teste sem nada";
    char s2[20] = "teste a-z A-Z";
    char s3[20] = "teste 0-9 a-g-z";
    char s4[20] = "teste -a-z  a-z0-9";
    char ans[150];
    int i = 0;

    while (s1[i] != '\0'){
        printf("%c", s1[i]);
        i++;
    }
    i = 0;
    printf("\n");
    expand(s1, ans);
    while (ans[i] != '\0'){
        printf("%c", ans[i]);
        i++;
    }
    i = 0;
    printf("\n\n");

    while (s2[i] != '\0'){
        printf("%c", s2[i]);
        i++;
    }
    i = 0;
    printf("\n");
    expand(s2, ans);
    while (ans[i] != '\0'){
        printf("%c", ans[i]);
        i++;
    }
    i = 0;
    printf("\n\n");

    while (s3[i] != '\0'){
        printf("%c", s3[i]);
        i++;
    }
    i = 0;
    printf("\n");
    expand(s3, ans);
    while (ans[i] != '\0'){
        printf("%c", ans[i]);
        i++;
    }
    i = 0;
    printf("\n\n");

    while (s4[i] != '\0'){
        printf("%c", s4[i]);
        i++;
    }
    i = 0;
    printf("\n");
    expand(s4, ans);
    while (ans[i] != '\0'){
        printf("%c", ans[i]);
        i++;
    }
    i = 0;
    printf("\n\n");

    return 0;
}
