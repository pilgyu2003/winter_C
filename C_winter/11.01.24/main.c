#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) {

    time_t start_time = time(NULL);
    time_t end_time;

    // Wait for 10 seconds
    do {
        end_time = time(NULL);
    } while (end_time - start_time < 10);

    printf("10초가 지났습니다.\n");

    return 0;
}