// Your code here...
#include<stdio.h>
#include<limits.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN;
    for(int i=0; i<n; i++) {
        if(arr[i] > max) {
            int new_arr[i] = max;
            printf("%d ", new_arr[i]);
        }
    }
}