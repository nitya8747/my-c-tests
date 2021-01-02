#include <stdio.h>
#include "StructureFile.c"
#include <math.h>

struct point makepoint(int x, int y);
float distance(struct point p1, struct point p2);
void main(){
    struct point p1;
    struct point p2;
    
    p1 = makepoint(3,2);
    p2 = makepoint(5,6);

    printf("p1 = (%d, %d)\np2 = (%d, %d)\n", p1.x, p1.y, p2.x, p2.y);
    printf("Distance between p1 and p2 = %.2f\n", distance(p1, p2));

}

struct point makepoint(int x, int y){ 
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}
float distance(struct point p1, struct point p2){
    float distance_squared = ((p1.x - p2.x)*(p1.x - p2.x)) + ((p1.y - p2.y)*(p1.y - p2.y));
    
    //Here for sqrt to work use the -lm tag
    float distance = sqrt(distance_squared);
    return distance;
}