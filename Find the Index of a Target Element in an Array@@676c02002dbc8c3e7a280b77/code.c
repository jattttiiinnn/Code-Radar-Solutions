// Your code here...
#include <stdio.h>

int main() {
    // int n, target;
    // scanf("%d%d", &n, &target);
    // int arr[n];
    // int found = -1;
    // for(int i=0; i<n; i++) {
    //     scanf("%d", &arr[i]);
    // }
    // for(int i=0; i<n; i++) {
    //     if(arr[i] == target){
    //         found = i;
    //         break;
    //     }
        
    // }
    // if(found != -1) {
    //     printf("%d",found);
    // }
    // else{
    //     printf("-1");
    // }
     int n, target;
    //printf("Enter the elements and targets : ");
    scanf("%d%d", &n, &target);
    int arr[n];
    int found = -1;
    //printf("Enter the elements in an array: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++) {
        if(arr[i] == target){
            found = i;
            break;
        }
        
    }
    if(found != -1) {
        printf("%d",found);
    }
    else{
        printf("-1");
    }
}