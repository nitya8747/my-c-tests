#include <stdio.h>

void main(){
    //Unary operator

    int c  = 12; 
    int *pointer; //pointer variable points to the int obj

    pointer = &c; //Pointer points to c


    printf("*pointer = %d\n", *pointer); //Prints 12

    int number2;

    number2 = *pointer; //Now number2 == 12

    printf("number2 = %d\n", number2);
    *pointer = *pointer + 1; //Now c = 13

    printf("c = %d\n", c);


    int *pointer2; //This is anther pointer

    pointer2 = pointer; //Now pointer2 points to whatever pointer points to

    //So first lets see value pointer2 points to

    printf("*pointer2 = %d\n", *pointer2); //Should be 13

    //Now lets create another integer variable

    int b =  99;

    pointer = &b;

    printf("*pointer2 = %d\n", *pointer2);

    //As we saw we changed what pointer points to but still the above statement prints 13
    //This means in line 26 essentially we told pointer2 to point whatever pointer was pointing to at that time

    


}