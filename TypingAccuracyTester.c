#include <stdio.h>
/*
    This program counts the number of backspaces pressed and 
    gives the probability of you hitting backspace.
*/

void main() {
    int keyboard;
    int backspace_number;
    int number_of_characters;
    number_of_characters = 0;
    backspace_number = 0;

    for (number_of_characters = 0; ((keyboard = getchar()) != EOF); ++number_of_characters ){
        printf("%c %d", keyboard, keyboard);
        if (keyboard == '\b'){  //If the backspace key is pressed
            backspace_number = backspace_number + 1;
            printf("Backspace %d\n",backspace_number);
        }
        
    }
    printf("The probability of you hitting backspace is: %d" , (backspace_number/number_of_characters));
    printf("The percentage of you hitting backspace is: %d" , (backspace_number/number_of_characters)*100);

}   