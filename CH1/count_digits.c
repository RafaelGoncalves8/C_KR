#include <stdio.h>

//count digits, white spaces and others using arrays

void main() {
    int c, nwhite, nother, i;
    int ndigits[10];

    nwhite=nother=0;

    for (i = 0; i<10; ++i) {
        if ('0' <= c <= '9') {
            ++ndigit[c-'0'];
        }
        
