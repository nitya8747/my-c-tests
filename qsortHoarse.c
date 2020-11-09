#include <stdio.h>


void qsort(int numbers[], int left, int right);

/*qsort: sort v[left] ........v[right]*/
void main(){
    int numbers[] = {5,4,3,2,1};
    qsort(numbers, 0, 4);
    for(int i = 0; i <= 4; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");
}
void qsort(int v[], int left, int right){
    int i, last;

    void swap(int v[], int i, int j);

    if(left >= right){
        return;
    }

    swap(v, left, (left + right)/2);

    last = left;

    for(i = left+1; i <= right; i++){
        if(v[i] < v[left]){
            swap(v, ++last, i);
        }
    }

    swap(v, left, last);
    qsort(v, left, last - 1);
    qsort(v, last+1, right);
}