// Your code here...
#include <stdio.h>

int main() {
    int size;
    scanf("%d",&size);
    int copy[size];
    int counted[size];
    for(int i=0; i<size; i++){
        copy[i] = arr[i];
        counted[i] = 0;
    }
    int sum = 0;
    for(int j=0; j<size; j++) {
        if(arr[i] == copy[j]){
            sum++;
            counted[j] = 1;
        }
    }
    printf("%d %d .\n", arr[i], sum);
}