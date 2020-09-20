#include <stdio.h>

main() {
    //Counting lines of the input

    int input_stream;
    int number_of_lines;
    
    
    number_of_lines = 0;
    while ((input_stream = getchar()) != EOF){
        if (input_stream == '\n'){
            ++number_of_lines;
        }
    }
    printf("Number of lines: %d\n", number_of_lines);



    printf("====================\n");
    printf("Using For loop\n");

    int nc;  //Number of characters
    int nl;   //Number of lines
    int keyboard; //Character stream

    for(nl = 0; (keyboard = getchar())!= EOF; ++nc){
        if (keyboard == '\n'){
            ++nl;
        }
    }
    printf("Number of lines: %d\n", nl);
}
