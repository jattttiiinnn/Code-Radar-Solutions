// Your code here..
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    for(int i=0; i<n; i++) {
        scanf("%d",&n);
    }
    for(int i=0; i<n; i++) {
        if(arr[i] > 0) {
            sum = arr[i];
        }
        else{
            if(arr[i] < 0) break;
        }
    }
    printf("%d", sum);
}