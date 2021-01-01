#include <stdio.h>

void main(){
    //Basic declaration of struct

    struct point{
        int x;
        int y;
    };

    struct point maxpt = {320, 900};

    printf("%d, %d\n", maxpt.x, maxpt.y);
}