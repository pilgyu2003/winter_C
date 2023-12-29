#include <stdio.h>

int main(void) {

    int x, y;

    printf("Enter first integers: ");
    scanf("%d", &x);
    printf("Enter second integers: ");
    scanf("%d", &y);

    printf("Sum: %d\n", x + y);
    printf("Difference: %d\n", x - y);
    printf("Product: %d\n",  x * y);
    printf("Quotient: %.5f\n", (double)x / y);

    return 0;
}