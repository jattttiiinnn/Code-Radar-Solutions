// Your code here...
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int maxLen = 1;
    int currLen = 1;
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    // First sort the array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Find longest consecutive sequence
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i-1] + 1) {
            currLen++;
        } else {
            currLen = 1;  // Reset when sequence breaks
        }
        if(currLen > maxLen) {
            maxLen = currLen;
        }
    }

    printf("%d", maxLen);
}