#include <stdio.h>
#include <string.h>
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
}

