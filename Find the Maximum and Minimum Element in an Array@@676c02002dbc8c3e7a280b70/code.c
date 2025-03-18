// Your code here...
#include <stdio.h>
#include <limits.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = INT_MAX;
    for(int i=0; i<size; i++) {
        if(arr[i] > sum) {
            sum = arr[i];
        }
    }
    printf(sum);
}
