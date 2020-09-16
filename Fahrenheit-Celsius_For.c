#include <stdio.h>

#define LOWER 0   //Lower limit
#define UPPER 300 //Upper limit
#define STEP 20   //Step size


main()
{
    int fahr;

    for (fahr = 0; fahr <=300; fahr = fahr + 20){
        float celsius;
        celsius = (5.0/9.0) * (fahr - 32);
        printf("%3d\t%6.1f\n", fahr, celsius);
    }
}