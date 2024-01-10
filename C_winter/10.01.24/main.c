#include <stdio.h>

// void print_stars() {
//     for (int i = 0; i < 30; i++) {
//         printf("*");
//     }
// }

// int main(void) {

//     print_stars();
//     printf("\n");
//     printf("Hello, World!\n");
//     print_stars();
//     printf("\n");

//     return 0;

// }

int max(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main(void) {
    int a = 10;
    int b = 20;
    int c = max(a, b);
    printf("max = %d\n", c);
    return 0;
}