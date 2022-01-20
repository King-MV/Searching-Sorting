#include <stdio.h>

void InputArray (int array[] , int m) {
    for (int i=0; i<m; i++) {
        printf("Enter %d element: ",i+1);
        scanf("%d",&array[i]);
    }
}

void swap (int array[] , int a , int b) {
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}

void SelectionSort (int array[] , int m) {
    for (int i=0; i<m-1; i++) {
        int min = i;
        for (int j=i+1; j<m; j++) {
            if (array[j] < array[min]) {
                swap(array , min , j);
            }
        }
    }
}

void PrintArray (int array[] , int m) {
    SelectionSort(array , m);
    for (int i=0; i<m; i++) {
        printf("%d ",array[i]);
    }
}

void main () {
    int m;
    printf("Enter size of array: ");
    scanf("%d",&m);

    int array[m];

    InputArray(array , m);
    PrintArray(array , m);
}