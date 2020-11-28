#include <stdio.h>
#define ALLOCSIZE 1000 //Size of available space

static char allocbuffer[ALLOCSIZE]; //This is the storage allocated

static char *allocpointer = allocbuffer; //This represents the next empty storage

char *alloc(int number){ //returns the pointer to n characters
    //This function allocates storage for n characters out the buffer

    //Checking if storage is left

    if ((allocbuffer + ALLOCSIZE - allocpointer) >= number){
        allocpointer += number; //Changing the next free storage left
        //In the above line even though allocpointer contains the address to the array element
        //Arithmetic operation above changes the pointer to the next element
        return allocpointer - number; //Returning to the pointer of the n char allocated
    }
    else{
        printf("Insufficient Storage!\n");
        return 0; //Storage insufficent
    }
}

//If we want to manually set a pointer from where storage is free

void afree (char *p){
    if(p >= allocbuffer && p < allocbuffer + ALLOCSIZE){
        allocpointer = p;
    }
}

//Here we clearly see how using arithmetic operations we are manipulating the arrays via pointers

//in the alloc function for example:
/*  
    Allocbuffer is an array that refers to the index 0 position of the array
    and the validation statement essentially wants to make sure if the required
    storage can be used in the pool of storage
*/

//But the arithmetic operators wont work with arrays but with the pointers to the array
