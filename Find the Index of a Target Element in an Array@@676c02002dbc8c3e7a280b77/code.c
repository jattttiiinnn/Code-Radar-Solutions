// Your code here...
#include <stdio.h>

int main() {
    int n, target;
    scanf("%d%d", &n, &target);
    int arr[n];
    int found = -1;
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++) {
        if(arr[i] == target){
            found = i;
            break;
        }
        
    }
    printf("%d", found-1);
}