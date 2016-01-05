#include <stdio.h>

int celc_to_fahr(int f) {
    int c;
    c = 5*(f-32)/9;
    return c;
}
void main ()
{

    int max, min, step;
    double fahr, celcius; 

    max = 100;
    min = -100;
    step = 10;
    fahr = min;

    printf ("  fahrenheit \t celcius\n");
    while (fahr <= max) {
        celcius = celc_to_fahr(fahr);
        printf ("%11.0f %11.0f \n", fahr, celcius);
        fahr = fahr + step;
    }
}
