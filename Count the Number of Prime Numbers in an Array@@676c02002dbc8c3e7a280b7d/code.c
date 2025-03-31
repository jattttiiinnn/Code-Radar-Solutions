// // Your code here...

// #include <stdio.h>

// int Prime(int arr[], int n){
//     for(int i=0; i<n; i++) {
//         if(arr[i] <= 1) {
//             printf(arr[i]);
//             continue;
//         }
//         int isPrime = 1;
//         for(int j=2; j*j<= arr[i]; j++) {
//             if(arr[j] % j == 0) {
//                 isPrime = 0;
//                 break;
//             }
//         }
//         if(isPrime) {
//             printf("%d",arr[i]);
//         }
//         else{
//             printf("%d",arr[i]);
//         }
//     }
// }

// int main() {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++) {
//         scanf("%d", arr[i]);
//     }
//     Prime(arr,n);
//     return 0;
// }

#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // Not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

// Function to count the number of prime numbers in the array
int countPrimes(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int primeCount = countPrimes(arr, n);
    printf("%d", primeCount);

    return 0;
}
