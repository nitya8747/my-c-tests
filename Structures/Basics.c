#include <stdio.h>
#include <math.h>

void main(){
    //Basic declaration of struct

    struct point{
        int x;
        int y;
    };

    struct point maxpt = {320, 900};

    printf("%d, %d\n", maxpt.x, maxpt.y);
    //Like this we can see that point is like a data type

    struct point point_one, point_two;
    point_one.x = 12;
    point_one.y = 13;

    point_two.x = 18;
    point_two.y = 19;

    float distance_sqr = ((point_one.x - point_two.x)*(point_one.x - point_two.x)) + ((point_one.y - point_two.y)*(point_one.y - point_two.y));

    //for the sqrt function we should put the -lm tag
    //cc Basics.c -lm
    float distance = sqrt(distance_sqr);

    printf("%.2f\n", distance);


    //Nested structures

    struct rectangle{
        struct point p1;
        struct point p2;
        struct point p3;
        struct point p4;
    };
}