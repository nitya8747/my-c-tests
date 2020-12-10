//arrays of pointers
#include <stdio.h>

void main(){

    char *pointerArray[14];
    char character = 'r';
    char charArray[] = "Raghav Sharma";

    int j = 0;
    for (int i = 14; i >= 0; i--){
        pointerArray[j++] = &charArray[i];
    }

    for (int i = 0; i < 15; i++){
        printf("%c    %d\n", *pointerArray[i], *pointerArray[i]);
    }
}