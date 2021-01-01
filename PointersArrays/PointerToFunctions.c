#include <stdio.h>

void swap(void *variable1, void *variable2, void (*print)(int n));
void sayDone(int n);
void main(){
    //Learning how to define pointers to functions
    int a = 90;
    int b = 30;
    void (*func_pointer)(int n) = &sayDone;
    swap(&a, &b,func_pointer);

    printf("%d %d\n", a, b);
}

void swap(void *variable1, void *variable2, void (*print)(int n)){
    void *temp;
    temp = variable1;
    variable1 = variable2;
    variable2 = temp;

    (*print)(10);
}

void sayDone(int n){
    printf("Hi! %d\n", n);
}

/*
In the swap function we saw that putting void we are telling that a pointer of any 
data type can be given to the function.

This can also be done with arrays 
*/


/*
    We also used pointers in the above functions
    sayDone for example is a function for which we made a pointer in the main function
    and passed its pointer to the swap function which called it.

    The use:
    Say we have multiple separate functions for numbers, strings and float
    We can tell a function to use any above functions depending on the data type they are dealing with
    */
   