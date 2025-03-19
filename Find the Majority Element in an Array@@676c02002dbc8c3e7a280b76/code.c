// Your code here...
#include <stdio.h>

int main() {
  int n;
scanf("%d",&n);
int arr[n];
int copy[n];
for(int i=0; i<n; i++) {
    scanf("%d",&arr[i]);
    copy[i] = arr[i];
}
int no = 0;
int majority = -1;
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++) {
        if(arr[j] == arr[i]) {
            no++;
        }
    }
    if(no > n/2) {
        majority = arr[i];
        break;
    }
    }
    printf("%d", majority);
}