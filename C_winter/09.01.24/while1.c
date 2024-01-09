/* 
주어진 개수의 피보나치 수열 출력 하라 
*/

#include <stdio.h>

int main() {
    long long n, first = 0, second = 1, next, i = 0;

    printf("수열의 개수를 입력하세요: ");
    scanf("%lld", &n);

    while(i < n) {
        if(i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%lld ", next);
        i++;
    }

    return 0;
}
