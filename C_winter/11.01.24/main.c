#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) {

    time_t start_time = time(NULL);
    time_t current_time;

    // Wait for 10 seconds
    do {
        current_time = time(NULL);
    } while (current_time - start_time < 10);

    printf("10초가 지났습니다.\n");

    return 0;
}