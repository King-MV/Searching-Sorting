// A C program used to search the position of a particular element in an array.
// Binary Searching technique is used here to search.
// Elements should be entered in sorted manner.
#include <stdio.h>

// Function using Binary searching to find position of the element.
int BinarySearch (int arr[] , int m , int target) {
    int start = 0 , end = m - 1;

    while (start <= end) {
//         This calculates the position of the middle element of the array.
//         If array is {1, 2, 3, 4}.
//         Here "2" comes out to be the middle element on position 1.
        int mid = (start+end)/2;
        if (target > arr[mid]) 
//             If target element is 3 in array {1 , 2 , 3 , 4}.
//             Then it starts searching from the position of middle element + 1 to the last element.
//             Because our element lies on right hand side of the middle element.
            start = mid + 1;
        else if (target < arr[mid])
//             If target element is 1 in array {1 , 2 , 3 , 4}.
//             Then it starts searching from the 0th element till the middle element.
//             Because our element lies on left hand side of the middle element.
            end = mid - 1;
        else 
//             If the above cases doesn't execute we conclude that the element we are searching for is on the middle position itself.
            return mid;
    }
//     We will return -1 if element doesn't found.
    return -1;
}

void main () {
    int m;
    printf("Enter size of array: ");
    scanf("%d",&m);

    int arr[m] , target;

//     Taking input of array.
    for (int i=0; i<m; i++) {
//         Elements should be entered in sorted manner for Binary search to work.
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }

//     Taking input of the target element to be found
    printf("\nEnter element to be found: ");
    scanf("%d",&target);

//     Initializing and storing the value returned from the BinarySearch function.
    int pos = BinarySearch(arr , m , target);

//     Displaying the position where the element is found.
    printf("Element found on %d position",pos);
}
