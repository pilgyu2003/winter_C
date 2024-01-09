/*
matrix product 를 계산하라

예시: 


*/

#include <stdio.h>

int main() {
    int A[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int B[2][3] = {{7, 8, 9}, {10, 11, 12}};
    int C[3][3] = {0};

    int row, col, i;

   
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            for (i = 0; i < 2; i++) {
                C[row][col] += A[row][i] * B[i][col];
            }
        }
    }

    //결과 출력 
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }

    return 0;
}
