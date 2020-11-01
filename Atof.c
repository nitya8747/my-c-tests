#include <stdio.h>
#include <ctype.h>

double atof(char string[]);

void main(){
    //Calling atof
    double value = atof("12.9");
    printf("%lf", value);
}


double atof(char string[]){
    double value, power;
    int i, sign;

    for (i = 0; isspace(string[i]); i++){
        ;
    } //Gets the index to the actual number

    sign = (string[i] == '-') ? -1:1; //Getting the sign if there

    if(string[i] == '+' || string[i] == '-'){
        i++;
    } //If + or - just move the index forward. Sign stored already

    for (value = 0.0; isdigit(string[i]); i++){
        value = 10.0 * value + (string[i] - '0');
    }

    if (string[i] == '.'){
        i++;
    }

    for (power = 1.0; isdigit(string[i]); i++){
        value = 10.0 * value + (string[i] - '0');
        power *= 10.0;
    }
    return sign * value / power;
}