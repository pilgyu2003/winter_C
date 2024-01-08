// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void) { 

//     int i = 1;
//     srand((unsigned)(time(NULL)));
//     while(i <= 5) {

//         printf("%d\n",rand());
//         i++;

//     }
//     return 0;

// }

#include <stdio.h>

int main(void) {

    long fact = 1;
    int i, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {

        fact *= i;

    }

    printf("Factorial of %d: %ld\n", n, fact);
}