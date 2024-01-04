#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double disc, root1, root2;

    printf("a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    disc = b * b - 4 * a * c;

    if (disc > 0) {
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("two real roots exist: %.2lf & %.2lf\n", root1, root2);
    } else if (disc == 0) {
        root1 = -b / (2 * a);
        printf("one real root exists: %.2lf\n", root1);
    } else {
        double real = -b / (2 * a);
        double img = sqrt(-disc) / (2 * a);
        printf("Complex roots exist: %.2lf + %.2lfi & %.2lf - %.2lfi\n", real, img, real, img);
    }

    return 0;
}
