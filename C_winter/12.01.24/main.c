#include <stdio.h>

void decimalToBinary(int x) {
    if (x > 1) {
        decimalToBinary(n / 2);
    }
    printf("%d", x % 2);
}

int main() {
    int decimal = 10;
    decimalToBinary(decimal);
    printf("\n");
    return 0;
}
