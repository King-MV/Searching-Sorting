import java.util.Arrays;

public class MergeSort {
    public static void main(String[] args) {
        int arr[] = {7, 3, 2, 111, 5, 1};

        seprate(arr, 0, arr.length-1);
        System.out.println(Arrays.toString(arr));
    }

    public static void seprate(int[] arr, int lo, int hi) {
        if(lo < hi) {
            int mid = (lo+hi)/2;
            // recursively divide array from
            // lo -> mid
            seprate(arr, lo, mid);
            // mid+1 -> hi 
            seprate(arr, mid+1, hi);

            // sort and merge these seprations
            merge(arr, lo, mid, hi);
        }
    }

    public static void merge(int[] arr, int lo, int mid, int hi) {
        int i = lo;
        int j = mid+1;
        int k = lo;
        int[] newarr = new int[hi+1];

        // compare and sort the seprations accordingly
        while(i <= mid && j <= hi) {
            if(arr[i] < arr[j]) {
                newarr[k] = arr[i];
                i++;
            } else {
                newarr[k] = arr[j];
                j++;
            }
            k++;
        }

        // if some elements on right half are left 
        if(i > mid) {
            while(j <= hi) {
                newarr[k] = arr[j];
                k++;
                j++;
            }
        } 
        // if some elements on left half are left
        else {
            while(i <= mid) {
                newarr[k] = arr[i];
                k++;
                i++;
            }
        }

        for(k=lo; k<=hi; k++) {
            arr[k] = newarr[k];
        }
    }
}