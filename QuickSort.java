import java.util.Arrays;

public class QuickSort {
    public static void main(String[] args) {
        int arr[] = {7, 3, 2, 111, 5, 1};

        quicksort(arr, 0, arr.length-1);

        System.out.println(Arrays.toString(arr));
    }

    public static void quicksort(int[] arr, int lo, int hi) {
        if(lo < hi) {
            int p = partition(arr, lo, hi);
            quicksort(arr, lo, p-1);
            quicksort(arr, p+1, hi);
        }
    }

    public static int partition(int[] arr, int lo, int hi) {
        int pivot = arr[lo]; //first element as pivot
        int i = lo;
        int j = hi;

        while(i < j) {
            // move until the element is less then pivot
            while(arr[i] <= pivot && i <= hi-1) {
                i++;
            }

            // move until the element is greater then pivot
            while(arr[j] >= pivot && j > lo) {
                j--;
            }

            if(i < j) {
                swap(arr, i, j);
            }
        }

        swap(arr, lo, j);
        return j;
    }

    public static void swap(int[] arr, int a, int b) {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
}