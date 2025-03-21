// Your code here...
#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int hasDuplicate = 0;
    for(int i=0; i<n-2; i++) {
        for(int j=i+1; j<n-1; j++) {
            if(arr[i] == arr[j]) {
                hasDuplicate = 1;
                break;
            }
        }
    }
    if(hasDuplicate) {
        printf("-1");
    }
    else{
        for(int i=0; i<n; i++) {
            for(int j=0; j<n-i-1; j++) { 
                 if(arr[j] > arr[j+1]) {
                     int temp = arr[j];
                     arr[j] = arr[j+1];
                     arr[j+1] = temp;
                 }
    }
    
   
}
}
 printf("%d", arr[n-2]);
}