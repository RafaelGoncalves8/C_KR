#include <stdio.h>

void main ()
{

    int fahr, celcius, max, min, step;

    max = 300;
    min = -100;
    step = 10;
    fahr = min;

    printf ("fahrenheit \t celcius\n");
    while (fahr <= max) {
        celcius = 5*(fahr-32)/9;
        printf ("\t %d \t %d \n", fahr, celcius);
        fahr = fahr + step;
    }
}
