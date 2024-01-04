#include <stdio.h>

int main() {
    int num1, num2;

    printf("정수를 입력하시오: ");
    scanf("%d", &num1);

    printf("정수를 입력하시오: ");
    scanf("%d", &num2);

    if (num2 != 0 && num1 % num2 == 0) {
        printf("%d는 %d의 약수입니다.\n", num1, num2);
    } else {
        printf("%d는 %d의 약수가 아닙니다.\n", num1, num2);
    }

    return 0;
}
