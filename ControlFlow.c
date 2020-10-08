#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXLINE 1000

//Function Declarations
void countingInputs();  //Counts the number of digits, whitespaces, others
int convertToInteger(char string[]); //Converting strings of digits into integer

void main(){
    int number1;
    int number2;

    printf("Enter number one: ");
    scanf("%d", &number1);
    printf("\n");
    printf("Enter number two: ");
    scanf("%d", &number2);
    printf("\n");

    if (number1 == number2){
        printf("%d and %d are equal numbers",number1, number2);
    }
    else if (number1 > number2){
        printf("%d is greater than %d",number1, number2);
    }
    else if (number1 < number2){
        printf("%d is greater than %d", number2, number1);
    }
    else{
        printf("ERROR!!!");
    }
    printf("\n");


    //Switch case system
    int number;
    switch (number){
        case 5:  printf("Its is 5\n");
        default: printf("Not 5\n");
    }

    //Example 2
    countingInputs();

    //For loop
    //Converting a string to an integer
    char s[] = "1233232";
    int integer = convertToInteger(s);
    printf("Integer: %d\n", integer);

}

void countingInputs(){
    int c, i, nwhite, nother, ndigit[10];   //Input, increment , number of whitespaces, other character, digit array

    nwhite = nother = 0;

    //Setting all elements in array to 0
    for (i = 0; i < 10; i++){
        ndigit[i] = 0;
    }
    printf("\nEnter whatever you want to enter => ");
    while ((c = getchar()) != EOF){
        switch (c){
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                    ndigit[c - '0']++;
                    break;

            case ' ':
            case '\n':
            case '\t':
                    nwhite++;
                    break; 
            default:
                nother++;
                break; //The breaks essentially stops the checking to go on. Prevents double counting
        }
    }

    printf("digits = ");
    for (i = 0; i< 10; i++){
        printf(" %d", ndigit[i]);
    }

    printf(", white spaces = %d, other = %d\n", nwhite, nother);

}


int convertToInteger(char s[]){
    int i, n, sign;

    for(i = 0; isspace(s[i]); i++){    //Skipping Whitespaces
        ;
    }

    sign = (s[i] == '-') ? -1:1;
    if (s[i] == '+' || s[i] == '-'){      //Skips sign
        i++;
    }

    for (n = 0; isdigit(s[i]); i++){
        n = 10*n + (s[i] - '0');
    return sign * n;
    }
}