#include <stdio.h>
main(){
    int c;
    c = getchar();
    long number_of_characters;
    while (c != EOF){
        putchar(c);
        printf("%d\n",c);
        c = getchar();
        ++number_of_characters; //Incrementing number_if_characters
    }
    //Prints the number of characters put in input
    printf("Number of characters: %ld\n", number_of_characters);  //To invoke press CTRL + D or in windows CTRL +Z
}