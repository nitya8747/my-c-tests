#include <stdio.h>
main(){
    int c;
    c = getchar();
    
    while (c != EOF){
        putchar(c);
        printf("%d\n",c);
        c = getchar();
        
    }
    //Prints the number of characters put in input
    printf("HI");  //To invoke press CTRL + D or in windows CTRL +Z
}