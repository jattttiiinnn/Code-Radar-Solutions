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
    for(int i=0; i<n; i++) {
         int num = arr[i];
        int digitSum = 0;
        while(num > 0){
            digitSum += num % 10;
            num /= 10;
        }
        new_arr[i] = digitSum;
    }
    for(int i=0; i<n; i++) {
        printf("%d ",new_arr[i]);
    }
}