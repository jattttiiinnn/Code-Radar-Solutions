// Your code here...
// Your code here...
#include <stdio.h>

int main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int peak = -1;
    if(arr[0]>arr[1]){peak=0;}

    for(int i = 1; i < size - 1; i++) {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            peak = i;
            break;
        }
    }
    if (peak==-1){peak=size-1;}

    // Print peak value outside the loop
    printf("%d", arr[peak]);
    
    return 0;
}