#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int copy[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++) {
        for(int j=1; j<n-i-1; j++){
            if(arr[j] < arr[j+1])
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
        }
    }
    int Duplicate = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] = arr[i+1]) {
            Duplicate = arr[i];
        }
    }
    printf("%d", Duplicate);
}