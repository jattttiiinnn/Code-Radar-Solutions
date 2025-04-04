#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int product1 = arr[0] * arr[1];
    int product2 = arr[n-1] * arr[n-2];
    if(product1 > product2) {
        printf("%d", product1);
    }
    // int max = INT_MIN;
    // int max2 = INT_MIN;
    // for(int i=0; i<n; i++) {
    //     if(arr[i] > max) {
    //         max2 = max;
    //         max = arr[i];
    //     }
    //     else if(arr[i] > max2 && arr[i] != max) {
    //         max2 = arr[i];
    //     }
    // }
    // printf("%d", max*max2);

}