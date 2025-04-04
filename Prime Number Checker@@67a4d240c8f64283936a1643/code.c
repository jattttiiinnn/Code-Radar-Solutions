// Your code here...
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (num < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Function to check and print if numbers in an array are prime
void checkPrimeArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("1 ");  // Prime
        } else {
            printf("0 ");  // Not Prime
        }
    }
    printf("\n");
}
