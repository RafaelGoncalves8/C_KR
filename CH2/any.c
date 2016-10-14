/* Returns the first ocorrence of s2 in s1 */

#include <stdio.h>

int any(char s1[], char s2[]){
    int i, j;
    i = j = 0;
    while (s1[i] != '\0'){
        j = 0;
        while (s2[j] != '\0'){
            if (s1[i] == s2[j]){
                return i;
            }
            j++;
        }
        i++;
    }
    return -1;
}

int main(void){
    char s1[30] = "teste testando";
    char s2[3] = "es";
    printf("%s\n%s\n", s1, s2);
    printf("%d\n", any(s1, s2));
    return 0;
}
