#include <stdio.h>

void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int decimal = 10;
    decimalToBinary(decimal);
    printf("\n");
    return 0;
}
