#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN;
    int max2 = INT_MIN;
    for(int i=0; i<n; i++) {
        if(arr[i] > max) {
            max2 = max;
            max = arr[i];
        }
        else if(arr[i] > max2 && arr[i] != max) {
            max2 = arr[i];
        }
    }
    printf("%d", max*max2);

}