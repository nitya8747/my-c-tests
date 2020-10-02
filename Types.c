#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAXLINE 1000

void main(){

    //String declaration
    char string[MAXLINE] = "Raghav Sharma\0";  //String is basically a collection of characters hence declared as a character. \0 is a null character

    printf("%s\n", string); //%s must be used to print the string

    //Using scanf to get an input
    char line[MAXLINE];
    printf("Please enter a line: ");
    
    scanf("%s", line);
    printf("%s\n", line);

    //Enumeration constant
    enum months {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC}; //Enumeration is just like define which creates a symbolic links to certain constants
    printf("%d\n", JAN); //Calling the symbolic link

    //Conversion of types

    //String of digits to integer
    char str[] = "1234444";
    int number =  atoi(str);
    printf("%d\n", number);

    //Lower case converter
    printf("Converting 'R' to lowercase: %c\n", lower('R'));

    //Upper case converter
    printf("Converting 'r' to uppercase: %c\n", upper('r'));

    //Upper case built in 
    printf("Built in: %c\n", toupper('c'));

    //Lower case built in 
    printf("Built in: %c\n", tolower('c'));
    int c;
    c = 'A';
    c= 65 + 32;
    printf("%c\n", c);
}


//Converting a uppercase character to an lowercase character
int lower (int c){
    if (c >= 'A' && c <= 'Z'){
        c = c + 32;  //There is a change of 32 to become a uppercase character
        return c;
    }
    else{
        return c;
    }
}


//Convertin a lowercase character to uppercase character
int upper(int c){
    if (c >= 'a'  && c <='z'){
        c = c - 32; //There is a change of 32 to become a lower case character
        return c;
    }
    else{
        return c;
    }
}