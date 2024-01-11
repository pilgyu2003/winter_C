#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) {

    time_t start_time = time(NULL);
    time_t end_time;

    printf("엔터를 눌러 시작하세요.\n");
    getchar(); // Wait for user to press Enter

    do {
        end_time = time(NULL);
    } while (end_time - start_time < 10);

    printf("10초가 지났습니다.\n");

    return 0;
}