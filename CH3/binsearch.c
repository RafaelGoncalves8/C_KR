/* Binary Search */

#include <stdio.h>

int binsearch(int x, int v[], int n);

int main(void) {
    int v[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    int w[7] = {2, 4, 6, 8, 10, 12, 14};
    printf("%d\n", binsearch(4, w, 7));
}

int binsearch(int x, int v[], int n) {
    int low, high, mid;
    low = 0;
    high = n-1;
    while (low <= high && x != v[mid]) {
        mid = (low+high)/2;
        if (x < v[mid])
            high = mid-1;
        else
            low = mid+1;
    }
    if (x == v[mid])
        return mid;
    else
        return -1;
}
