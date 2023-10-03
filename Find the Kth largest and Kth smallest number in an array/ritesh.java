import java.util.Arrays;

public class KthLargestAndSmallest {
    public static void main(String[] args) {
        int[] arr = {12, 3, 1, 15, 9, 7};
        int k = 3; // Replace with your desired K value

        int kthLargest = findKthLargest(arr, k);
        int kthSmallest = findKthSmallest(arr, k);

        System.out.println("Kth largest element: " + kthLargest);
        System.out.println("Kth smallest element: " + kthSmallest);
    }

    public static int findKthLargest(int[] arr, int k) {
        Arrays.sort(arr); // Sort the array in ascending order
        return arr[arr.length - k]; // Kth largest element is at index arr.length - k
    }

    public static int findKthSmallest(int[] arr, int k) {
        Arrays.sort(arr); // Sort the array in ascending order
        return arr[k - 1]; // Kth smallest element is at index k - 1
    }
}
