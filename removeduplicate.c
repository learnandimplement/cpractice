
#include <stdio.h>

void removeDuplicates(int arr[], int *n) {
    for (int i = 0; i < *n; i++) {
        for (int j = i + 1; j < *n; j++) {
            if (arr[i] == arr[j]) {  // If duplicate found
                // Shift elements left to remove duplicate
                for (int k = j; k < *n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                (*n)--;  // Reduce array size
                j--;  // Stay at the same index for the next iteration
            }
        }
    }
}


// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
   

    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    printArray(arr, n);

    removeDuplicates(arr, &n);

    printf("Array after removing duplicates: ");
    printArray(arr, n);


    return 0;
}