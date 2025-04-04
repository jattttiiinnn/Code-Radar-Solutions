#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int new_arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    int digit[n];
    for(int i=0; i<n; i++) {
        if(arr[i] > 0) {
            digit[i] = n % 10;
            n /= 10;
            sum += arr[i];
            sum = new_arr[i];
        }
    }
    printf("%d",new_arr);
}