#include <stdio.h>

char *month_name(int n);
void main(){
    printf("Output: %s\n", month_name(3));
}

char *month_name(int n){
    static char *name[] = {"Illegal", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    return (n < 1 || n > 12) ? name[0]:name[n];
}