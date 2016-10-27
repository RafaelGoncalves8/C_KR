/* Extend atof to handle scientific notation of the form */
/* 123.45e-6 */
/* where a floating-point number may be followed by e or E and an optionally signed exponent. */

#include <stdio.h>
#include <ctype.h>

#define MAX 15

/* atof: convert string s to double */
double atof(char s[])
{
	double val, power, ten = 0, pot = 1;
	int i, sign, sign2, notation = 0; 
	for (i = 0; isspace(s[i]); i++) /* skip white space */
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10;
	}
	if (s[i] == 'e' || s[i] == 'E')
		notation ++;
	sign2 = (s[++i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (ten = 0.0; isdigit(s[i]); i++)
		ten = 10.0 * ten + (s[i] - '0');
	for (i = 0; i<ten; i++)
		if (sign2 > 0)
			pot *= 10;
		else
			pot /= 10;

	return sign * val / power * pot;
}

int main(void){
	char num1[MAX] = "12.3e3";
    char num2[MAX] = "-3.23e-2";
    printf("%s\n%f\n", num1, atof(num1));
    printf("%s\n%f\n", num2, atof(num2));
}

