public class InsertionSort {
    public static void main(String[] args) {
        int arr[] = {7, 3, 2, 111, 5, 1};

        insertsort(arr, arr.length);

        for(int i=0; i<arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void insertsort(int[] arr, int n) {
        for(int i=0; i<n; i++) {
            int j = i;
            while(j > 0) {
                if(arr[j] < arr[j-1]) {
                    swap(arr, j, j-1);
                }
                j--;
            }
        }
    }

    public static void swap(int[] arr, int a, int b) {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
}
