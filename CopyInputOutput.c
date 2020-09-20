#include <stdio.h>
main(){
    int c;
    c = getchar();
    float number_of_characters;
    while (c != EOF){
        putchar(c);
        printf("%d\n",c);
        c = getchar();
        ++number_of_characters; //Incrementing number_if_characters
    }
    //Prints the number of characters put in input
    printf("Number of characters: %0f\n", number_of_characters);  //To invoke press CTRL + D or in windows CTRL +Z

    //Learning to implement above functionality in for loop

    double nc; //This variable will give the number of characters in the input

    printf("==========================\n");
    printf("Implementing whatever while loop does in for loop\n");
    for (nc = 0; getchar() != EOF; ++nc){
        ; //Null Statement
    }
    printf("Number of characters: %0f\n", nc);
}