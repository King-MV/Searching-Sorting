#include <stdio.h> 

void swap (int array[] ,int i , int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp; 
}

void BubbleSort (int array[] , int m) {
    for (int i=0; i<m; i++) {
        for (int j=0; j<m-1; j++) {
            if (array[j] > array[i])
                swap(array , i , j);
        }
    }
    
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

    BubbleSort(array , m);
}