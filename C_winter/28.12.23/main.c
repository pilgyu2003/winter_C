#include <stdio.h>

int main(void) {

    int x, y;

    printf("Enter first integers: ");
    scanf("%d", &x);
    printf("Enter second integers: ");
    scanf("%d", &y);

    printf("Sum: %d\nDifference: %d\nProduct: %d\nQuotient: %.5f\n", x + y, x - y, x * y, (double)x / y);

    return 0;
}