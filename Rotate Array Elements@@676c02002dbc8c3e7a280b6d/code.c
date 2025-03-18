#include <stdio.h>

int main() {
    int size,rotation;
    scanf("%d %d",&size,&rotation);
    int arr[size];
    for(int i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }
    // for(int i=0; i<size; i++){
    //     printf("%d ",arr[i]);
    // }
    printf("\n");

    int temp[size];
    for(int i=0; i<size; i++){
        int new = (i + rotation) % size;
        temp[new] = arr[i];
    }

    for(int i=0; i<size; i++){
        arr[i] = temp[i];
    }

    for(int i=0; i<size; i++){
        printf("%d \n", arr[i]);
    }
}