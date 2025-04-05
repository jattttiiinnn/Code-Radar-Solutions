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
    int new_arr[n];
    for(int i=0; i<n; i++) {
       int max = arr[i+1];
       for(int j=i-+1; j<n; j++){
        if(arr[j] > max) {
            max = arr[j];
        }
       }
       new_arr[i] = max;
    }
    new_arr[n-1] = -1;
    for(int i=0; i<n; i++) {
        printf("%d", new_arr[i]);
    }
}