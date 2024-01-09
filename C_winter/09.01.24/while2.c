/*
아스키코드로 인코딩 또는 디코딩을 하는 프로그램을 while문을 사용해서 작성하라

예시: 

모드를 선택하세요 (1: 인코딩, 2: 디코딩): 2
아스키 코드를 입력하세요 (종료: Enter): 
116 121 105 121 
tyiy

*/


#include <stdio.h>

void encodeString() {
    char ch;
    printf("문자열을 입력하세요 (종료: Enter): \n");
    while ((ch = getchar()) != '\n' && ch != EOF) {
        printf("%d ", ch);
    }
    printf("\n");
}

void decodeAscii() {
    int ascii;
    char ch;
    printf("아스키 코드를 입력하세요 (종료: Enter): \n");
    while (1) {
        if (scanf("%d", &ascii) != 1) {
            while ((ch = getchar()) != '\n' && ch != EOF); // 잘못된 입력을 무시합니다.
            printf("\n유효하지 않음. 다시 입력하세요.\n");
            continue;
        }

        ch = getchar();
        if (ch == '\n') {
            break;
        }

        if (ascii >= 0 && ascii <= 127) {
            printf("%c", (char)ascii);
        } else {
            printf("\n유효하지 않음. 다시 입력하세요.\n");
        }
    }
    printf("\n");
}
int main() {
    int choice;

    printf("모드를 선택하세요 (1: 인코딩, 2: 디코딩): ");
    if (scanf("%d", &choice) != 1) {
        printf("잘못된 입력입니다.\n");
        return 1;
    }
    getchar(); 

    if (choice == 1) {
        encodeString();
    } else if (choice == 2) {
        decodeAscii();
    } else {
        printf("잘못된 선택입니다.\n");
    }

    return 0;
}
