#include <stdio.h>

int main(void) {

    printf("0123456789\n");
    // printf("%10d\n",123);
    // printf("%-10d\n",123);
    printf("%10.3f\n",1.23456789);
    printf("%-10.3f\n",1.23456789);
    printf("%.3f\n",1.23456789);
    
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long: %zu bytes\n", sizeof(long));
    printf("Size of long long: %zu bytes\n", sizeof(long long));
    printf("Size of pointer: %zu bytes\n", sizeof(void*));
    
    return 0;

}