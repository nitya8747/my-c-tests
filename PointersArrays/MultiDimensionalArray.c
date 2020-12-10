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

    //A few things to note:
    /*
        For passing a multidimensinal array in a function
        function(int array[<n_row>][<n_column>])
        That being said n_row isnt necessary. The number of rows are necessary
        but number of columns are necessary

        Why the number of rows unnecessary?
        as when we pass an array to a function we are just passing the pointer to
        array.
        Specifically an array of rows.

        Another way of function calling:
        function(int (*array)[<n_column>])
        Note the paranthesis must be there else [] will have higher prcedence
        f(int *array[<n_column>]) => Represents an array of pointers of obj int


        In short the first dimension is free else others have to be specified
    */

}