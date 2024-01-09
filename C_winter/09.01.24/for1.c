/*

입력된 숫자까지 존재하는 모든 소수 찾아서 출력하라

예시: 

몇번째 숫자까지 소수를 찾을까요?: 100
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 

*/


#include <stdio.h>
#include <stdbool.h>

int main() {

    int i, j, target;
    bool isPrime;

    printf("몇번째 숫자까지 소수를 찾을까요?: ");
    scanf("%d", &target);

    for (i = 2; i <= target; i++) {
        isPrime = true;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    return 0;

}
