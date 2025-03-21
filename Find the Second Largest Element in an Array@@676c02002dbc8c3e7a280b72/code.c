// Your code here...
#include<stdio.h>

int main() {
    int n,notsame=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){notsame=1;break;}
    }
    // int hasDuplicate = 0;
    // for(int i=0; i<n-1; i++) {
    //     for(int j=i+1; j<n; j++) {
    //         if(arr[i] == arr[j]) {
    //             hasDuplicate = 1;
    //             break;
    //         }
    //     }
    // }
    // if(hasDuplicate) {
    //     printf("-1");
    // }
    if(notsame){
        for(int i=0; i<n; i++) {
            for(int j=0; j<n-i-1; j++) { 
                 if(arr[j] > arr[j+1]) {
                     int temp = arr[j];
                     arr[j] = arr[j+1];
                     arr[j+1] = temp;
                 }
    }
    
   
}
 printf("%d", arr[n-2]);
}
else{printf("-1");}

}