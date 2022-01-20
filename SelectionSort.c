// A C program used to sort elements of an array using Selection Sort.
#include <stdio.h>

// Function used to take input of array elements.
void InputArray (int array[] , int m) {
    for (int i=0; i<m; i++) {
        printf("Enter %d element: ",i+1);
        scanf("%d",&array[i]);
    }
}

// Function used to swap elements of the array.
void swap (int array[] , int a , int b) {
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}

// Selection sort is used here inside SelectionSort() function.
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

// Function used to print array elements.
void PrintArray (int array[] , int m) {
    // PrintArray() function calling SelectionSort() function.   
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

    // Main function calling InputArray() function.    
    InputArray(array , m);
    // Main function calling PrintArray() function.    
    PrintArray(array , m);
}
