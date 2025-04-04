#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int new_arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++) {
        if(arr[i] > 0) {
            int digit[i++] = n % 10;
            n /= 10;
            int sum += arr[i];
        }
    }
    printf("%d",sum);
}