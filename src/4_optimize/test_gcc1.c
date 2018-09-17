#include<stdio.h>

void twiddle1(long *xp, long *yp) {
    *xp += *yp;
    *xp += *yp;
}

void twiddle2(long *xp, long *yp) {
    *xp += 2* *yp;
}

void main() {
    long xp1 = 10;
    long yp1 = 10;
    twiddle1(&xp1, &yp1);
    printf("%ld\n", xp1);

    long xp2 = 10;
    long yp2 = 10;
    twiddle2(&xp2, &yp2);
    printf("%ld\n", xp2);
}