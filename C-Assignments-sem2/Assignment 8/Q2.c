// 2. Write a C Program to count the frequency of array elements in a 1-D array
#include <stdio.h>

void countFrequencies(int arr[], int n);

int main() {
    int arr[100];
    int n, i;

    // Read the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Read the elements of the array
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to count frequencies
    countFrequencies(arr, n);

    return 0;
}

void countFrequencies(int arr[], int n) {
    int freq[100] = {0};
    int i, j;

    // Calculate frequency of each element
    for(i = 0; i < n; i++) {
        if(arr[i] != 0) { // Only process non-zero elements
            freq[i] = 1; // Initialize frequency count

            for(j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    freq[i]++;
                    arr[j] = 0; // Mark counted elements
                }
            }
        }
    }

    // Print the frequency of each element
    printf("Element - Frequency\n");
    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            printf("%d - %d\n", arr[i], freq[i]);
        }
    }
}
