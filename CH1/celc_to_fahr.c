#include <stdio.h>

void main ()
{

    int max, min, step;
    double fahr, celc; 

    max = 20;
    min = -20;
    step = 2;
    celc = min;

    printf ("%10s %10s\n", "celcius", "fahrenheit");
    while (celc <= max) {
        fahr = (9.0*celc/5.0)+32.0;
        printf ("%10.0f %10.1f \n", celc, fahr);
        celc = celc + step;
    }
}
