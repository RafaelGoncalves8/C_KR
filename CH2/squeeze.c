/* Delete characters in s1 that matches s2  */

#include <stdio.h>
#define MAX 1000

int squeeze(char s1[], char s2[]);

int squeeze(char s1[], char s2[]) {
    int i, j, k;
    for (i = k = 0; s1[i] != '\0'; i++)
        for (j = 0;j != '\0'; j++)
            if (s1[i] != s2[j])
                s1[k] = s1[i];
        k++;
            
    s1[k] = '\0';
} 

int main(void) { 
    char s1[30] = "teste testando";
    char s2[3] = "es";
    squeeze(s1,s2);
    printf("%s\n", s2);
    return 0;
}
