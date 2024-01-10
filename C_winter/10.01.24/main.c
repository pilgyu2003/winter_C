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

    int x,y,larger;

    printf("정수 두 개를 입력하세요: ");
    scanf("%d %d", &x, &y);

    larger = max(x, y);
    printf("큰 수는 %d입니다.\n", larger);

    return 0;
    
}

