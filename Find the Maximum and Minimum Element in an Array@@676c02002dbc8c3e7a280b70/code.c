// Your code here...
#include <stdio.h>
#include <limits.h>

int main() {
    int size;
    printf("Enter the size ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements ");
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = INT_MAX;
    for(int i=0; i<size; i++) {
        if(arr[i] < sum) {
            sum = arr[i];
        }
    }
    printf("%d ",sum);

    int min = INT_MIN;
    for(int i=0; i<size; i++) {
        if(arr[i] > min) {
            min = arr[i];
        }
    }
    printf("%d",min);
}
