#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int new_arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int maxfreq = 0, currentfreq = 1, maxelement = arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i] == arr[i+1]){
            currentfreq++;
        }
        else{
            if(currentfreq > maxfreq){
                maxfreq = currentfreq;
                maxelement = arr[i-1];
            }
            currentfreq = 1;
        }
    }
    if(currentfreq > maxfreq){
        maxfreq = currentfreq;
        maxelement = arr[n-1];
    }
    printf("%d",maxelement);
}