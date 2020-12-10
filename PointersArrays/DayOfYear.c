//Understanding multi-dimensional arrays

#include <stdio.h>
//     Months =>                J  F  M  A  M  J  J  A  S  O  N   D
static char dayTab[2][13] = {{0,31,28,30,31,30,30,31,31,30,31,30,31}, //=> Normal yr
                             {0,31,29,30,31,30,30,31,31,30,31,30,31}};//=> Leap yr

int day_of_year(int year, int month, int day);
void month_day(int year, int yearday, int *pmonth, int *pday);

int main(){
    return 0;
}

int day_of_year(int year, int month, int day){
    int i;
    int leap;

    leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
    for(i = 1; i < month; i++){
        day = day + dayTab[leap][i];
    }
    return day;
}

void month_day(int year, int yearday, int *pmonth, int *pday){
    int i;
    int leap;

    leap = year%4 == 0 && year%100 != 0 || year%400 == 0;

    for(i = 1; yearday > dayTab[leap][i]; i++){
        yearday -= dayTab[leap][i];
    }
    *pmonth = i;
    *pday = yearday;
    
}
