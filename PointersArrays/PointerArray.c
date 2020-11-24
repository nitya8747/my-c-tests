#include <stdio.h>


int strlen(char *string);

void main(){
    int array[4] = {1,2,3,4}; //Creates an array of 5 elements
    int *pointer; //Pointer of int obj

    pointer = &array[0]; //Points to the first element of array

    printf("This is the pointer pointing to the first element of array: %d\n", *pointer);

    //Refer the other following elements
    printf("This is the second element in the array: %d\n", *(pointer+1));
    pointer = array; 

    //Name of an array is the synonym for th elocation of initial element
    //SO:

    pointer = array;  //Pointer still points to the first element of array
    //The other following elements of the array can be accessed like this

    printf("This is the third element in the array: %d\n", *(pointer+2));
    pointer = array+2; //ALso equal to 3 as above
    
    
    //Notice we didnt need to put the & sign in line 18

    pointer = array; //Points to the first element by default
    pointer = array + 1; //Points to the second element now. 

    //array the name will always point to the first element of the array.

    printf("This is the 3rd element: %d\n", pointer[1]);
    printf("This is the third element: %d\n", *(pointer+1));

    //As we can see the above two lines are showing identical results
    //pointer[i] = *(pointer+i)
    
    //To get the index of the pointer to point to the next index:
    pointer++; //Will be 3 as pointer was pointing to 2 in the array before

    //Pls note
    pointer = array; 
    pointer++;
    //Are legal for pointers as they are essentially a variable

    //But in arrays you cant do that
    //array = pointer; and array++ is illegal


    //Lets apply this to a program. strlen. Counting the length of a character array

    char name[] = "Raghav";
    printf("%s has %d characters in it\n",name, strlen(name));
}


int strlen(char *string){
    int number_of_characters;
    for (number_of_characters = 0; *string != '\0'; string++){
        printf("%c    %d\n", *string, *string);
        number_of_characters++;
    }
    return number_of_characters;
}