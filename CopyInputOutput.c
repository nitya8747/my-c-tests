#include <stdio.h>
main(){
    int c;
    c = getchar();

    while (c != EOF){
        printf("%d\n",c);
        putchar(c);
        c = getchar();
    }
    printf("HI\n");  //To invoke press CTRL + D or in windows CTRL +Z
}