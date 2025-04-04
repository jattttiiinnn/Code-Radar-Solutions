#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int min = INT_MIN;
    int max2 = 0;
    int max = 0;
    int maxi2 = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] > min) {
            max = arr[i];
        }
        else if(arr[i] > min && arr[i] != max) {
            maxi2 = arr[i];
        }
    }
    printf("%d", max*maxi2);

}