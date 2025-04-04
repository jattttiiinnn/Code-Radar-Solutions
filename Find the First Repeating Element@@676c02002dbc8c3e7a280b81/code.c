#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int copy[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int Duplicate = 0;
    for(int i=0; i<n; i++) {
        copy[i] = arr[i];
        if(arr[i] = arr[i+1]){
            Duplicate = arr[i];
            break;
        }
    }
    printf("%d", Duplicate);
}