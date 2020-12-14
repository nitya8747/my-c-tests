#include <stdio.h>
#define NUMBER 10
#define square(x) x*x  //Parameterised macros
#define display printf


void main(int argc, char *argv[]){
    printf("Number: %d\n", argc);
    printf("Program: %s\n", argv[0]);
    printf("Argument: %s\n", argv[1]);
    display("%d\n", square(10));
    display("%d\n", NUMBER);

    //Typedef
    typedef int integer;
    integer raghav = 17;
    printf("%d\n", raghav);

    //Conditional macro
    #ifdef display
        printf("Raghav\n");
    #endif

    #ifndef raghav
        printf("Raghav get out\n");
    #endif
}