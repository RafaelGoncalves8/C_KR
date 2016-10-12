/* Delete characters in s1 that matches s2  */

#include <stdio.h>
#define MAX 1000

void squeeze(char s1[], char s2[]);

void squeeze(char s1[], char s2[]) {
    int i, j, k, flag;
    k = 0;
    for (i = 0; s1[i] != '\0'; i++){
            s1[k] = s1[i];
            k++;
        for (j = 0, flag = 0; s2[j] != '\0' && flag == 0; j++){
            /* printf("%c %c %c\n", s1[i], s2[j], s1[k]); #<{(| Debugging |)}># */
            if (s1[i] == s2[j]) {
                flag++;
            }
        }
        if (flag > 0)
            k--;
    }
                

    s1[k] = '\0';
    /* printf("%s\n", s1); */
    return;
} 

int main(void) { 
    char s[30] = "teste testando";
    char r[3] = "es";
    printf("%s\n", s);
    squeeze(s, r);
    printf("%s\n", r);
    printf("%s\n", s);
    return 0;
}
