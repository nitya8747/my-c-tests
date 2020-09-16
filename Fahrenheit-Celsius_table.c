#include <stdio.h>

main(){

    /*
        Initiating variables required
    */
    float fahr;
    float celsius;
    /*OR for multiple variables*/
    int lower, upper, step;

    lower = 0;  /*Lower limit of temp table*/
    upper = 300;/*Upper limit of temp table*/
    step = 20; /*Step size*/

    fahr = lower;
    
    printf("Fahrenheit-Celsius Conversion Table\n");
    printf("===================================\n");
    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("-------------------------------\n");
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + 20;
    }
}