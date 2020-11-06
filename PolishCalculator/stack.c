#include <stdio.h>
#include "calc.h"
#define MAXVAL 100  /*maximum depth of val stack*/
int stack_position = 0;  //NExt free stack position
double value[MAXVAL];

/*Push: push f onto value stack*/

void push(double f){
    if (stack_position < MAXVAL){
        value[stack_position++] = f;
    }
    else{
        printf("error: stack full, can't push %g\n", f);
    }
}


//pop: pop and return top value from stack

double pop(){
    if(stack_position > 0){
        return value[--stack_position];
    }
    else{
        printf("error: stack empty \n");
        return 0.0;
    }
}