#include <stdio.h>

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
        celcius = 5*(fahr-32)/9;
        printf ("%11.0f %11.2f \n", fahr, celcius);
        fahr = fahr + step;
    }
}
