#include <stdio.h>


void swap(int *var_one, int *var_two);
int strlen(char *string); //Returns the length of a string
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

    //When we want to access the data/value in the memory that the pointer points to the contents of the address
    //with that numerical index then you derefrence the pointer

    //Pointer is the address to the value


    //Pointers allow you to manipulate variables that you pass in the function.
    //Remember earlier the value was copied but nothing changed in the actual variable


    int n1 = 3;
    int n2 = 8;

    printf("\n\n");
    printf("Before: n1 = %d, n2 = %d\n", n1, n2);

    swap(&n1, &n2);

    printf("After: n1 = %d, n2 = %d\n", n1, n2);


    //Address arithmetic 
    //Lets try finding the length of a string
    char string[] = "Raghav Sharma";
    printf("The size of %s: %d\n", string, strlen(string));
}


void swap(int *var_one, int *var_two){
    int temp = *var_one;

    *var_one = *var_two;

    *var_two = temp;
}

int strlen(char *string){
    char *pointer = string;
    
    while(*pointer != '\0'){
        pointer++;
    }
    return pointer - string;
}