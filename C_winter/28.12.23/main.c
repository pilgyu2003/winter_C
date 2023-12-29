#include <stdio.h>

int main(void) {

    int x, y;

    printf("Enter first integers: ");
    scanf("%d", &x);
    printf("Enter second integers: ");
    scanf("%d", &y);

    int sum = x + y;
    int difference = x - y;
    int product = x * y;
    float quotient = x / y;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %f\n", quotient);

    return 0;
}