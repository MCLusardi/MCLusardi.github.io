#include<stdio.h>

void countint(int array[], int size, int compare, int *below, int *above);

int main(void){
    int sample[6] = {3,5,9,10,43,29};
    int example = 15;
    int below, above;
    countint(sample, 6, example, &below, &above);
    printf("%d numbers below %d\n%d numbers above %d\n", below, example, above, example);
    return 0;
}

void countint(int array[], int size, int compare, int *below, int *above){
    int i;
    int low = 0;
    int high = 0;
    for(i=0; i<size; ++i){
        if(array[i] < compare){
            ++low;
            //printf("Round %d: low is %d\n", i, low);
        }
        else if(array[i] > compare){
            ++high;
        }
    }
    //printf("low = %d\n", low);
    //printf("high = %d\n", high);
    *below = low;
    *above = high;
}