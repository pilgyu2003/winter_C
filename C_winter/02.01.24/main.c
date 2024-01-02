#include <stdio.h>
#include <math.h>

//fabs

int main(void) {

    double a, b;
    a = 0.3*3 + 0.1;
    b = 1.0;

    printf("a==b : %d\n", a == b);
    printf("fabs(a-b) < 1e-10 : %d\n", fabs(a-b) < 1e-10);
    return 0;
}