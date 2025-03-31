// Your code here..
#include <stdio.h>
int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int sum = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] > 0) {
            sum += arr[i];
        }
    }
    printf("%d", sum);
}