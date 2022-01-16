#include <stdio.h>

int BinarySearch (int arr[] , int m , int target) {
    int start = 0 , end = m - 1;

    while (start <= end) {
        int mid = (start+end)/2;
        if (target > arr[mid]) 
            start = mid + 1;
        else if (target < arr[mid])
            end = mid - 1;
        else 
            return mid;
    }
    return -1;
}

void main () {
    int m;
    printf("Enter size of array: ");
    scanf("%d",&m);

    int arr[m] , target;

    for (int i=0; i<m; i++) {
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nEnter element to be found: ");
    scanf("%d",&target);

    int pos = BinarySearch(arr , m , target);

    printf("Element found on %d position",pos);
}