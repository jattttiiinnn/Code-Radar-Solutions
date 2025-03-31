// // Your code here..
// #include <stdio.h>

// int findPositive(int arr[], int n){
//     int present[n+1];
//     for(int i=0; i<0; i++) {
//         present[i] = 0;
//     }
//     for(int i=0; i<n; i++) {
//         if(arr[i] > 0 && arr[i] <= n) {
//             present[arr[i]] = 1;
//         }
//     }
//     for(int i=0; i<n; i++) {
//         if(present[i] = 0) {
//             return i;
//         }
//     }
//     return n + 1;
// }
// int main() {
//    int n;
//     scanf("%d", &n);
//     int arr[n];
    
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     int result = findPositive(arr, n);
//     printf("%d\n", result);
// }

#include <stdio.h>

// Function to find the smallest missing positive integer
int findSmallestMissingPositive(int arr[], int n) {
    int present[n + 1]; // Array to keep track of presence of numbers from 1 to n
    for (int i = 0; i <= n; i++) {
        present[i] = 0;
    }
    
    // Mark the presence of numbers in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n) {
            present[arr[i]] = 1;
        }
    }
    
    // Find the first missing positive integer
    for (int i = 1; i <= n; i++) {
        if (present[i] == 0) {
            return i;
        }
    }
    
    return n + 1; // If all numbers from 1 to n are present, return n+1
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int result = findSmallestMissingPositive(arr, n);
    printf("%d\n", result);
    
    return 0;
}
