#include <stdio.h>

//Functions declaration
int power_up(int base, int power);

void main(){
    int number;
    int power;

    number = 5;
    power = 5;

    //Calling power function 
    printf("%d^%d is equal to: %d\n",number, power,power_up(number, power));
    number = 6;
    power = 7;
    printf("%d^%d is equal to: %d\n",number, power, power_up(number, power));
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