#include <stdio.h>
/*
    This program counts the number of backspaces pressed and 
    gives the probability of you hitting backspace.
*/

void main() {
    int keyboard;
    int backspace_number;
    int number_of_characters;
    for (number_of_characters = 0; (keyboard = getchar()) != EOF; ++number_of_characters ){
        if (keyboard == '\b'){  //If the backspace key is pressed
            backspace_number++;
        }
    }
    printf("The probability of you hitting backspace is: %d\n",(backspace_number/number_of_characters));
}