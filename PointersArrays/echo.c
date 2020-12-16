#include <stdio.h>

void echo(int argc, int *argv[]);
//Echo command-line arguments: 1st version
void main(int argc, int *argv[]){
    int i;

    for (i = 0; i < argc; i++){ //argv[0] = the file name here it is ./a.out
        printf("%s%s", argv[i], (i < argc - i) ? " " : "  ");
        //printf("\n");
    }

    echo(argc, argv);
}

//Echo version 2
//Manipulating the argv[] array using pointers

void echo(int argc, int *argv[]){
    while(--argc > 0){
        printf("%s%s", *++argv, (argc > 1) ? " ":" ");

    }
}