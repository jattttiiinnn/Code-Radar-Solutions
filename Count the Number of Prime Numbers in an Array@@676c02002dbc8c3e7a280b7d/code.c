// Your code here...

#include <stdio.h>

int Prime(int arr[], int n){
    for(int i=0; i<n; i++) {
        if(arr[i] <= 1) {
            printf(arr[i]);
            continue;
        }
        int isPrime = 1;
        for(int j=2; j*j<= arr[i]; j++) {
            if(arr[j] % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) {
            printf("%d",arr[i]);
        }
        else{
            printf("%d",arr[j]);
        }
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", arr[i]);
    }
    Prime(arr,n);
    return 0;
}