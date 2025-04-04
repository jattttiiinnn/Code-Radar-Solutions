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
    int max2 = -1;
    int max = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] > min) {
            max = arr[i];
        }
        else if(arr[i] > min && max != max2) {
            max2 = arr[i];
        }
    }
    printf("%d", max2);

}