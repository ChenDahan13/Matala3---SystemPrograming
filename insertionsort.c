#include <stdio.h>
#include "functionlist.h"

/*Function changes the location of i numbers
  from the cells they were to one cell after */
void shift_element(int *arr, int i) {
    int numOfMoves;
    for(numOfMoves = 0; numOfMoves < i; numOfMoves++) {
        *(arr + i + - numOfMoves) = *(arr + i - 1 - numOfMoves);
    }
}

//Function sorts the array with insertion sort
void insertion_sort(int* arr, int len) {
    int i, j, val, count = 0;
    for(i=1; i<len; i++) {
        val = *(arr+i);
        j = i - 1;
        while (j >= 0 && val < *(arr + j)) {
            count++;
            j = j - 1;
        }
        shift_element(arr+j+1, count);
        *(arr + j + 1) = val;
        count = 0;
    }
}