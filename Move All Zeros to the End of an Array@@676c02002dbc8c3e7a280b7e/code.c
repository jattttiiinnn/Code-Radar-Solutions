// // Your code here...
// #include <stdio.h>

// void Movezeroes(int arr[], int n) {
//     for(int i=0; i<n-1; i++) {
//         for(int j=0; j<n; j++) {
//             if(arr[j] == 0) {
//                 for(int k=j+1; j<n; j++){
//                     if(arr[k] != 0){
//                         int temp = arr[j];
//                         arr[j] = arr[k];
//                         arr[k] = temp;
//                         break;
//                     }
//                 }
//             }
//         }
//     }
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     Movezeroes(arr, n);

//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

#include <stdio.h>

void moveZerosToEnd(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  
        for (int j = 0; j < n - i - 1; j++) {  
            if (arr[j] == 0) {  // If current element is zero
                // Find the next non-zero element and swap
                for (int k = j + 1; k < n; k++) {
                    if (arr[k] != 0) {
                        // Swap arr[j] and arr[k]
                        int temp = arr[j];
                        arr[j] = arr[k];
                        arr[k] = temp;
                        break;  // Stop after one swap
                    }
                }
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    moveZerosToEnd(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
