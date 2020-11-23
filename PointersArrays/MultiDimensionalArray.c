#include <stdio.h>
void main(){
    int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    int n_column = 3;
    int n_row = n_column;
    /*
    printf("%d ", matrix[0][2]);
    printf("%d ", matrix[1][2-1]);
    printf("%d ", matrix[2][2-2]);
    printf("\n");
    */
    int column = n_column - 1;
    for(int row = 0, column = n_column - 1; row < n_row && column-1>n_column-1; row++, column--){
        printf(" %d", matrix[row][column]);
    }
    printf("\n");
}