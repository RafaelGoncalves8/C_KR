/* Exercise 3-4. In a two's complement number representation, our version of itoa does not */
/* handle the largest negative number, that is, the value of n equal to -(2^wordsize-1 ). Explain why not. */
/* Modify it to print that value correctly, regardless of the machine on which it runs. */

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
/* The smallest int is -2147483648 but the largest int is 2147483647 */

/* itoa: convert n to characters in s */
void itoa(int num, char s[])
{
	int i, sign;
    sign = num;
	i = 0;
	do {
		/* generate digits in reverse order */
		s[i++] = abs(num % 10) + '0'; /* get next digit */
	} while ((num /= 10) != 0);
	/* delete it */
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

int main(void){
    int i;
    int a = -2147483648;
    int b = 2147483647;
    char output[MAX];
    printf("%d\n", a);
    printf("%d\n", b);
    itoa(a, output);
    for (i = 0; output[i] != '\0'; i++)
        printf("%c", output[i]);
    printf("\n");
    itoa(b, output);
    for (i = 0; output[i] != '\0'; i++)
        printf("%c", output[i]);
    printf("\n");
}
