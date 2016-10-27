/* Exercise 3-5. Write the function itob(n,s,b) that converts the integer n into a base b */
/* character representation in the string s . In particular, itob(n,s,16) formats s as a */
/* hexadecimal integer in s . */

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

/* itob: convert num to characters in s in base b */
void itob(int num, char s[], int b)
{
	int i, sign, n;
    sign = num;
	i = 0;
	do {
		/* generate digits in reverse order */
        n = abs(num % b);
		if (n  < 10)
			s[i++] = n + '0';
		else
			s[i++] = n + 'A' - 10;
	} while ((num /= b) != 0);
	/* delete it */
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

int main(void){
    int i;
    int a = -12;
    int b = 164;
	int base = 16;
    char output[MAX];
    printf("%d\n", a);
    printf("%d\n", b);
    itob(a, output, base);
    for (i = 0; output[i] != '\0'; i++)
        printf("%c", output[i]);
    printf("\n");
    itob(b, output, base);
    for (i = 0; output[i] != '\0'; i++)
        printf("%c", output[i]);
    printf("\n");
}
