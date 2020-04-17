#include <stdio.h>
#include <string.h>
#include "checking.h"

char arr[5][5];
int R = 5, C = 5;

int main() {

    arr[0][0] = '-';
    arr[0][1] = '-';
    arr[0][2] = '-';
    arr[0][3] = 'x';
    arr[0][4] = '-';
    arr[1][0] = 'x';
    arr[1][1] = 'x';
    arr[1][2] = 'x';
    arr[1][3] = 'x';
    arr[1][4] = '-';
    arr[2][0] = '-';
    arr[2][1] = '-';
    arr[2][2] = '-';
    arr[2][3] = 'x';
    arr[2][4] = 'x';
    arr[3][0] = '-';
    arr[3][1] = 'x';
    arr[3][2] = '-';
    arr[3][3] = '-';
    arr[3][4] = 'x';
    arr[4][0] = 'x';
    arr[4][1] = 'x';
    arr[4][2] = 'x';
    arr[4][3] = '-';
    arr[4][4] = '-';

    char *matrix[5];
    for(int i = 0; i < R; i++) {

        matrix[i] = arr[i];
    }

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            printf("%d\t", checking_neighbour(matrix,i,j,R,C));
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            printf("%c\t", matrix[i][j]);
        }
        printf("\n");
    }

}
