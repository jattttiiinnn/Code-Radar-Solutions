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
    int new_arr[n];
    for(int i=0; i<n; i++) {
        if(arr[i] > max) {
            new_arr[i] = max;
            printf("%d ", new_arr[i]);
        }
    }
}