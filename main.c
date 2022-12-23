#include <stdio.h>
#include "functionlist.h"
#define SIZE 50


int main() { 
    int arr[SIZE];
    printf("Enter %d numbers for the array:\n ", SIZE);
    int i, num;
    for(i=0; i<SIZE; i++) {
        scanf("%d", &num);
        *(arr+i) = num;
    }
    insertion_sort(arr, SIZE);
    printf("\n");
    printf("{");
    for (i = 0; i < SIZE; i++) {
        num = *(arr+i);
        if(i!=SIZE - 1)
            printf("%d, ", num);
        else
            printf("%d", num);
    }
    printf("}\n");
    return 0;
}