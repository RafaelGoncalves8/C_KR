/* Program that reads the header limits.h and float.h and prints
 * the len of each type */
#include <float.h>
#include <limits.h>
#include <stdio.h>

void main() {
        printf("Range of unsigned char: %d to %d\n", 0, UCHAR_MAX);
        printf("Range of signed char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);

        printf("Range of unsigned short: %d to %d\n", 0, USHRT_MAX);
        printf("Range of signed short: %d to %d\n", SHRT_MIN, SHRT_MAX);

        printf("Range of unsigned int: %d to %d\n", 0, UINT_MAX);
        printf("Range of signed int: %d to %d\n", INT_MIN, INT_MAX);

        printf("Range of unsigned long: %lu to %lu\n", 0L, ULONG_MAX);
        printf("Range of signed long: %ld to %ld\n", LONG_MIN, LONG_MAX);

        printf("Range of float: %f to %f\n", FLT_MIN, FLT_MAX);

        printf("Range of double: %f to %f\n", DBL_MIN, DBL_MAX);
}
