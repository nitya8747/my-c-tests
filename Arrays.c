#include <stdio.h>

void main(){
    //Array
    int array[5];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    ++array[4];
    int it;
    for (it=0; it < 5; ++it){
        printf(" %d", array[it]);
    }
    printf("\n");
    //Array intialisation with elements


    int i;
    int number_array[] = {1,2,3,4};  //This creates an array. Fills in with elements. Also auto initialises the size to 4
    printf("Printing the array: \n");
    printf("[");
    for(i = 0; i< 4; i++){
        printf("%d ", number_array[i]);
    }
    printf("]");
    printf("\n");

}