/* Exercise 3-6. Write a version of itoa that accepts three arguments instead of two. The third */
/* argument is a minimum field width; the converted number must be padded with blanks on the */
/* left if necessary to make it wide enough. */

#include <stdio.h>
#include <string.h>

#define MAX 12

#define abs(n) ((n) < 0? -1*(n) : (n))

/* reverse: reverse string s in place */
void reverse(char s[])
{
	int c, i, j;
	for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

/* itoa: convert n to characters in s */
void itoa2(int num, char s[], int min)
{
	int i, sign;
    sign = num;
    i = 0;
	do {
		/* generate digits in reverse order */
		s[i++] = abs(num % 10) + '0'; /* get next digit */
	} while ((num /= 10) != 0);
    while (i <= min) {
        s[i++] = ' ';
    }
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

int main(void){
    int i;
    int a = -2147483648;
    int b = 4;
    char output[MAX];
    printf("%d\n", a);
    printf("%d\n", b);
    itoa2(a, output, 6);
    for (i = 0; output[i] != '\0'; i++)
        printf("%c", output[i]);
    printf("\n");
    itoa2(b, output, 6);
    for (i = 0; output[i] != '\0'; i++)
        printf("%c", output[i]);
    printf("\n");
}
