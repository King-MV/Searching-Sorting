// A C program used to sort a given array using Bubble sort method in ascending order.
// Bubble sort compares the element with its corresponding element and swaps it if required.
#include <stdio.h> 

// Swap function used to swap two array elements when required.
void swap (int array[] ,int i , int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp; 
}

// Bubble Sorting is used to sort the elements.
void BubbleSort (int array[] , int m) {
    for (int i=0; i<m; i++) {
        for (int j=0; j<m-1; j++) {
            // Here it compares an element and its corresponding element.            
            if (array[j] > array[i])
                // And swaps it if required.                
                swap(array , i , j);
        }
    }
    
    // Loop used to print the sorted array.
    for (int a=0; a<m; a++) {
        printf("%d ",array[a]);
    }
}

void main () {
    int m;
    printf("Enter size of element: ");
    scanf("%d",&m);

    int array[m];

    for (int i=0; i<m; i++) {
        printf("Enter %d element: ",i+1);
        scanf("%d",&array[i]);
    }

    // Bubble sort function is initialized and called inside the main function.
    BubbleSort(array , m);
}
