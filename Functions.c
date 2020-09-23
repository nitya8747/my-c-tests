#include <stdio.h>

//Functions declaration
int power_up(int base, int power);

void main(){
    int number;
    int power;

    number = 5;
    power = 5;

    //Calling power function 
    int result = power_up(number, power);
    printf("%d^%d is equal to: %d\n",number, power, result);
}


//Power function
int power_up(int base, int power){
    int result = 1;
    int i;

    for (i = 1; i <= power; ++i){
        result = result * base;
    }
    return result;
}