//arrays of pointers
#include <stdio.h>

void main(){

    char *pointerArray[14];
    char character = 'r';
    char charArray[] = "Raghav Sharma";

    int j = 0;
    for (int i = 14; i >= 0; i--){
        pointerArray[j++] = &charArray[i];
    }

    for (int i = 0; i < 15; i++){
        printf("%c    %d\n", *pointerArray[i], *pointerArray[i]);
    }
}

//Initialization of Pointer Arrays
char *month_name(int n){
    static char *name[] = {
        "Illegal month",
        "January", "February", "March",
        "April", "May", "June", "July",
        "August", "September", "October",
        "November", "December"
    };

    return ( n < 1 || n > 12) ? name[0] : name[n];
}

//Pointers vs Mutli-dimensional Arrays
/*
    int a[10][20] => 200 int sized locations
    positions have been initialised

    int *b[10];
    IT only allocates 10 pointers of int obj
    But they aren't initialised

    
*/
