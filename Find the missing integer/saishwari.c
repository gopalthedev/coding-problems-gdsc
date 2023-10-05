#include <stdio.h>

int findMissingInteger(int arr[], int n) {
    // Calculate the expected sum of integers from 1 to n+1
    int expectedSum = (n + 1) * (n + 2) / 2;
    
    // Calculate the actual sum of elements in the array
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }
    
    // The missing integer is the difference between the expected and actual sums
    int missingInteger = expectedSum - actualSum;
    
    return missingInteger;
}

int main() {
    int arr[] = {1, 2, 4, 6, 3, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int missingInteger = findMissingInteger(arr, n);
    
    printf("The missing integer is: %d\n", missingInteger);
    
    return 0;
}
