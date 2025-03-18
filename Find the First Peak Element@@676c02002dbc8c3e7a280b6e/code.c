// Your code here...
// Your code here...
#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    int peak = -1;
    for(int i=0; i<size - 1; i++) {
        if(i == 0 && i + 1 < size) {
            if(arr[i] > arr[i + 1]) {
                peak = i;
                break;
            }
        }
        else if(i == size-1 && i - 1 >= 0) {
            //printf("\nComparing last element %d with %d", arr[i], arr[i-1]);
            if(arr[i] > arr[i-1]) {
                peak = i;
                break;
            }
        } 
        else if(i-1 >= 0 && i+1 < size) {
            //printf("\nComparing %d with neighbors %d and %d", arr[i], arr[i-1], arr[i+1]);
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
                peak = i;
                break;
            }
        printf("%d",arr[peak]);
        }
    }
}