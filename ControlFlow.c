#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 1000

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

}