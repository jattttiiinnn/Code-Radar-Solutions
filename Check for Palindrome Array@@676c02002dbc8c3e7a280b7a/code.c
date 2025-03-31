// Your code here...
#include <stdio.h>

void reverse(int arr[], int n) {
    int start = 0;
    int end = n-1;

    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main() {
    int n;
    //printf("Enter the size: ");
    scanf("%d", &n);

    int arr[n], copy[n];

    //printf("Enter the array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Added & operator
        copy[i] = arr[i];
    }

    reverse(arr,n);

    int isPalindrome = 1;
    for(int i=0; i<n; i++) {
        if(arr[i] != copy[i]) {
            isPalindrome = 0;
            break;
        }
   }
   if(isPalindrome) printf("YES");
   else {
    printf("NO");
   }
}