#include <stdio.h>

int main() {
    int m, max = 0, total = 0;
    int n = 0, o = 0;
    
    printf("No of elements in the array: ");
    scanf("%d", &m);
    
    int arr[m], left[m], right[m];
    
    printf("Array of elements: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Finding max height from left side
    for (int i = 0; i < m; i++) {
        if (arr[i] >= max) {
            max = arr[i];
        }
        left[i] = max;
    }
    
    max = 0;
    // Finding max height from right side
    for (int i = m - 1; i >= 0; i--) {
        if (arr[i] >= max) {
            max = arr[i];
        }
        right[i] = max;
    }
    
    // Finding the trapped water amount
    for (int i = 0; i < m; i++) {
        if (left[i] < right[i]) {
            n = left[i];
        } else {
            n = right[i];
        }
        o = n - arr[i]; // This is the depth of water at position i
        if (o > 0) {
            total += o; // Add the depth to total if it's positive (i.e., water is trapped)
        }
    }
    
    printf("Amount of water trapped: %d\n", total);

    return 0;
}

